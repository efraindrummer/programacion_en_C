#include <stdio.h>
#include <stdlib.h>
#include <search.h>
#include <string.h>
#ifdef __linux__
    #include <termios.h>
    #include <unistd.h>
    #define CLEAR_SCREEN "clear"
    int _getch ();
    #define _lfind lfind
    #define _strdup strdup
#else
    #include <conio.h>
    #define CLEAR_SCREEN "cls"
    #if defined(__MSDOS__) || defined(__BORLANDC__)
        #define _getch getch
        #define _lfind lfind
        #define _strdup strdup
    #endif
#endif

typedef struct ADTElemento {
    char* simbolo;
    char* nombre;
    int numero_atomico;
    int grupo;
    int periodo;
    char* familia;
} Elemento;

void* array_insert  (void *array_var, size_t *length, size_t size, const void *datum);
void* array_remove  (void *array_var, size_t *length, size_t size, const void *datum);
void  array_foreach (void *array_var, size_t length, size_t size, void *params, void (*func)(void*,void*));
void  pause_screen (const char *message);
char* read_string_line (const char *message);
char* read_str (const char *message, char *string_var);
int   read_integer (const char *message);
int   read_field (FILE *file_stream, char *field);
int   compare_elemento (const Elemento *elemento1, const Elemento *elemento2);
void  print_elemento (Elemento *datum, int *counter);
void  print_on_file (Elemento *datum, FILE *file_stream);

const char *path = "elementos.tsv";

int main (void)
{
    Elemento *elementos = NULL;
    size_t length=0;
    Elemento *datum = NULL, elemento;
    int counter=0, main_option, suboption;
    char field[255];
    FILE *file_stream = fopen (path, "r");
    if (file_stream!=NULL)
    {
        while (read_field (file_stream, field))
        {
            elemento.simbolo = _strdup (field);
            read_field (file_stream, field);
            elemento.nombre = _strdup (field);
            read_field (file_stream, field);
            elemento.numero_atomico = atoi (field);
            read_field (file_stream, field);
            elemento.grupo = atoi (field);
            read_field (file_stream, field);
            elemento.periodo = atoi (field);
            read_field (file_stream, field);
            elemento.familia = _strdup (field);
            elementos = (Elemento*) array_insert (elementos, &length, sizeof (Elemento), &elemento);
        }
        fclose (file_stream);
    }
    do {
        putchar ('\n');
        system (CLEAR_SCREEN);
        printf ("MEN\351\n");
        printf ("1.- Altas\n");
        printf ("2.- Consultas\n");
        printf ("3.- Actualizaciones\n");
        printf ("4.- Bajas\n");
        printf ("5.- Ordenar registros\n");
        printf ("6.- Listar registros\n");
        printf ("7.- Salir\n");
        printf ("Seleccione una opci\242n: ");
        fflush (stdout);
        do
            main_option = _getch ();
        while (main_option<'1' || main_option>'7');
        printf ("%c\n\n", main_option);
        if (length==0 && main_option!='1' && main_option!='7')
        {
            pause_screen ("No hay registros.\n");
            continue;
        }
        if (main_option<'5')
        {
            elemento.simbolo = read_str ("Ingrese el simbolo del elemento", field);
            datum = (Elemento*) _lfind (&elemento, elementos, &length, sizeof (Elemento), (int(*)(const void*,const void*))compare_elemento);
            if (datum!=NULL)
            {
                putchar ('\n');
                print_elemento (datum, &counter);
            }
        }
        if (main_option=='1' && datum!=NULL)
            printf ("El registro ya existe.\n");
        else if (main_option>='2' && main_option<='4' && datum==NULL)
            printf ("\nRegistro no encontrado.\n");
        else switch (main_option)
        {
            case '1':
                elemento.simbolo = _strdup (field);
                elemento.nombre = read_string_line ("Ingrese el nombre");
                elemento.numero_atomico = read_integer ("Ingrese el numero atomico");
                elemento.grupo = read_integer ("Ingrese el grupo");
                elemento.periodo = read_integer ("Ingrese el periodo");
                elemento.familia = read_string_line ("Ingrese el familia");
                elementos = (Elemento*) array_insert (elementos, &length, sizeof (Elemento), &elemento);
                printf ("\nRegistro agregado correctamente.\n");
                break;
            case '3':
                printf ("Men\243 de actualizaci\242n de campos\n");
                printf ("1.- nombre\n");
                printf ("2.- numero atomico\n");
                printf ("3.- grupo\n");
                printf ("4.- periodo\n");
                printf ("5.- familia\n");
                do {
                    suboption = read_integer ("Seleccione el n\243mero de campo a modificar");
                    if (suboption<1 || suboption>5)
                        printf ("Opci\242n incorrecta\n");
                } while (suboption<1 || suboption>5);
                switch (suboption)
                {
                    case 1:
                        free (datum->nombre);
                        datum->nombre = read_string_line ("Ingrese el nuevo nombre");
                        break;
                    case 2:
                        datum->numero_atomico = read_integer ("Ingrese el nuevo numero atomico");
                        break;
                    case 3:
                        datum->grupo = read_integer ("Ingrese el nuevo grupo");
                        break;
                    case 4:
                        datum->periodo = read_integer ("Ingrese el nuevo periodo");
                        break;
                    case 5:
                        free (datum->familia);
                        datum->familia = read_string_line ("Ingrese el nuevo familia");
                        break;
                }
                printf ("\nRegistro actualizado correctamente.\n");
                break;
            case '4':
                memcpy (&elemento, datum, sizeof (Elemento));
                elementos = (Elemento*) array_remove ((void**)elementos, &length, sizeof (Elemento), datum);
                free (elemento.simbolo);
                free (elemento.nombre);
                free (elemento.familia);
                printf ("Registro eliminado correctamente.\n");
                break;
            case '5':
                qsort (elementos, length, sizeof (Elemento), (int(*)(const void*,const void*))compare_elemento);
                printf ("Registros ordenados correctamente.\n");
                break;
            case '6':
                counter = 0;
                array_foreacjson_decodeh (elementos, length, sizeof (Elemento), &counter, (void(*)(void*,void*))print_elemento);
                printf ("Total de registros: %d.\n", counter);
                break;
        }
        if (main_option!='7')
            pause_screen ("");
    } while (main_option!='7');
    file_stream = fopen (path, "w");
    if (file_stream!=NULL)
    {
        array_foreach (elementos, length, sizeof (Elemento), file_stream, (void(*)(void*,void*))print_on_file);
        fclose (file_stream);
    }
    return EXIT_SUCCESS;
}

void* array_insert (void *array_var, size_t *length, size_t size, const void *datum)
{
    char *record_var;
    array_var = realloc (array_var, size * (*length+1));
    record_var = (char*)array_var + *length * size;
    memcpy (record_var, datum, size);
    (*length)++;
    return array_var;
}

void* array_remove (void *array_var, size_t *length, size_t size, const void *datum)
{
    size_t i;
    char *record_var = (char*)array_var;
    for (i=0; i<*length && datum!=record_var; i++, record_var+=size);
    if (i<*length)
    {
        for (i++; i<*length; i++)
        {
            record_var+=size;
            memcpy (record_var-size, record_var, size);
        }
        (*length)--;
        array_var = realloc (array_var, size * (*length));
    }
    return array_var;
}

void array_foreach (void *array_var, size_t length, size_t size, void *params, void (*func)(void*,void*))
{
    char *record_var = (char*)array_var;
    if (length>0)
    {
        func (record_var, params);
        array_foreach (record_var+size, length-1, size, params, func);
    }
}

int compare_elemento (const Elemento *elemento1, const Elemento *elemento2)
{
    return elemento1==elemento2 ? 0 : strcmp (elemento1->simbolo, elemento2->simbolo);
}

void print_elemento (Elemento *datum, int *counter)
{
    printf ("simbolo       : %s\n", datum->simbolo);
    printf ("nombre        : %s\n", datum->nombre);
    printf ("numero atomico: %d\n", datum->numero_atomico);
    printf ("grupo         : %d\n", datum->grupo);
    printf ("periodo       : %d\n", datum->periodo);
    printf ("familia       : %s\n", datum->familia);
    putchar ('\n');
    (*counter)++;
}

void print_on_file (Elemento *datum, FILE *file_stream)
{
    fprintf (file_stream, "%s\t", datum->simbolo);
    fprintf (file_stream, "%s\t", datum->nombre);
    fprintf (file_stream, "%d\t", datum->numero_atomico);
    fprintf (file_stream, "%d\t", datum->grupo);
    fprintf (file_stream, "%d\t", datum->periodo);
    fprintf (file_stream, "%s\n", datum->familia);
}

char* read_string_line (const char *message)
{
    char string_line[255];
    (void) read_str (message, string_line);
    return _strdup (string_line);
}

char* read_str (const char *message, char *string_var)
{
    printf ("%s: ", message);
    scanf ("%[^\r\n]", string_var);
    (void) getchar ();
    return string_var;
}

int read_integer (const char *message)
{
    int integer_var;
    printf ("%s: ", message);
    scanf ("%d", &integer_var);
    (void) getchar();
    return integer_var;
}

int read_field (FILE *file_stream, char *field)
{
    fscanf (file_stream, "%[^\t\n\r]", field);
    fgetc (file_stream);
    return feof (file_stream) == 0;
}

void pause_screen (const char *message)
{
    printf ("%s\nPresione una tecla para continuar . . . ", message);
    fflush (stdout);
    _getch ();
}

#ifdef __linux__

int _getch ()
{
    int ch;
    struct termios oldt, newt;
    tcgetattr (STDIN_FILENO, &oldt);
    newt = oldt;
    newt.c_lflag &= ~(ICANON | ECHO);
    tcsetattr (STDIN_FILENO, TCSANOW, &newt);
    ch = getchar();
    tcsetattr (STDIN_FILENO, TCSANOW, &oldt);
    return ch;
}

#endif
