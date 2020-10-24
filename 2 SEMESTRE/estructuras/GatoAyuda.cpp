#include <stdio.h>
#include <stdlib.h>

void loop(char m [3] [3]);
void imprimir (char m [3] [3]);
void jugador1 (char m [3] [3]);
void jugador2 (char m [3] [3]);
int ganador (char m [3] [3]);

main()
{
	char m [3] [3] = {'1','2','3','4','5','6','7','8','9'};
	
	loop (m);
}

void loop(char m [3] [3])
{
	int i, j;
	
	i = 0;
	
	do
	{
		imprimir (m);
		
		if (i % 2 == 0)
		{
			jugador1 (m);
		}
		else
		{
			jugador2 (m);
		}
		
		j = ganador (m);
		
		i++;
	}
	while (i < 9 && j == 2);
	
	system("CLS");
	imprimir (m);
	
	if (j == 0)
	{
		printf("Gana el jugador 1");
	}
	else if (j == 1)
	{
		printf("Gana el jugador 2");
	}
	else if (j == 2)
	{
		printf("Nadie gana");
	}	
}

void imprimir (char m [3] [3])
{
	int f, c;
	char val;
	
	for (f=0; f<3; f++)
	{
		for (c=0; c<3; c++)
		{
			printf(" %c |", m [f] [c]);
		}
		printf("\n------------\n");
	}
	printf("\n");
}

void jugador1 (char m [3] [3])
{
	char p1;
	int i, j, r;
	
	do
	{
		do
		{
			printf("Ingrese posicion jugador 1: ");
			fflush (stdin);
			scanf("%c", & p1);
		}
		while (p1 < '1' || p1 > '9');
		
		r = 0;
		
		switch (p1)
		{
			case '1':
			{
				i = 0;
				j = 0;
				if (m [i] [j] == 'X' || m [i] [j] == 'O')
				{
					r = 1;
					printf("Posicion ocupada. Ingrese otro numero\n\n");
				}
				break;
			}
				
			case '2':
			{
				i = 0;
				j = 1;
				if (m [i] [j] == 'X' || m [i] [j] == 'O')
				{
					r = 1;
					printf("Posicion ocupada. Ingrese otro numero\n\n");
				}
				break;
			}
			
			case '3':
			{
				i = 0;
				j = 2;
				if (m [i] [j] == 'X' || m [i] [j] == 'O')
				{
					r = 1;
					printf("Posicion ocupada. Ingrese otro numero\n\n");
				}
				break;
			}
			
			case '4':
			{
				i = 1;
				j = 0;
				if (m [i] [j] == 'X' || m [i] [j] == 'O')
				{
					r = 1;
					printf("Posicion ocupada. Ingrese otro numero\n\n");
				}
				break;
			}
			
			case '5':
			{
				i = 1;
				j = 1;
				if (m [i] [j] == 'X' || m [i] [j] == 'O')
				{
					r = 1;
					printf("Posicion ocupada. Ingrese otro numero\n\n");
				}
				break;
			}
			
			case '6':
			{
				i = 1;
				j = 2;
				if (m [i] [j] == 'X' || m [i] [j] == 'O')
				{
					r = 1;
					printf("Posicion ocupada. Ingrese otro numero\n\n");
				}
				break;
			}
			
			case '7':
			{
				i = 2;
				j = 0;
				if (m [i] [j] == 'X' || m [i] [j] == 'O')
				{
					r = 1;
					printf("Posicion ocupada. Ingrese otro numero\n\n");
				}
				break;
			}
			
			case '8':
			{
				i = 2;
				j = 1;
				if (m [i] [j] == 'X' || m [i] [j] == 'O')
				{
					r = 1;
					printf("Posicion ocupada. Ingrese otro numero\n\n");
				}
				break;
			}
			
			case '9':
			{
				i = 2;
				j = 2;
				if (m [i] [j] == 'X' || m [i] [j] == 'O')
				{
					r = 1;
					printf("Posicion ocupada. Ingrese otro numero\n\n");
				}
				break;
			}
		}
	}
	while (r == 1);
	
	m [i] [j] = 'X';
}

void jugador2 (char m [3] [3])
{
	char p2;
	int i, j, r;
	
	do
	{
		do
		{
			printf("Ingrese posicion jugador 2: ");
			fflush (stdin);
			scanf("%c", & p2);
		}
		while (p2 < '1' || p2 > '9');
		
		r = 0;
		
		switch (p2)
		{
			case '1':
			{
				i = 0;
				j = 0;
				if (m [i] [j] == 'X' || m [i] [j] == 'O')
				{
					r = 1;
					printf("Posicion ocupada. Ingrese otro numero\n\n");
				}
				break;
			}
				
			case '2':
			{
				i = 0;
				j = 1;
				if (m [i] [j] == 'X' || m [i] [j] == 'O')
				{
					r = 1;
					printf("Posicion ocupada. Ingrese otro numero\n\n");
				}
				break;
			}
			
			case '3':
			{
				i = 0;
				j = 2;
				if (m [i] [j] == 'X' || m [i] [j] == 'O')
				{
					r = 1;
					printf("Posicion ocupada. Ingrese otro numero\n\n");
				}
				break;
			}
			
			case '4':
			{
				i = 1;
				j = 0;
				if (m [i] [j] == 'X' || m [i] [j] == 'O')
				{
					r = 1;
					printf("Posicion ocupada. Ingrese otro numero\n\n");
				}
				break;
			}
			
			case '5':
			{
				i = 1;
				j = 1;
				if (m [i] [j] == 'X' || m [i] [j] == 'O')
				{
					r = 1;
					printf("Posicion ocupada. Ingrese otro numero\n\n");
				}
				break;
			}
			
			case '6':
			{
				i = 1;
				j = 2;
				if (m [i] [j] == 'X' || m [i] [j] == 'O')
				{
					r = 1;
					printf("Posicion ocupada. Ingrese otro numero\n\n");
				}
				break;
			}
			
			case '7':
			{
				i = 2;
				j = 0;
				if (m [i] [j] == 'X' || m [i] [j] == 'O')
				{
					r = 1;
					printf("Posicion ocupada. Ingrese otro numero\n\n");
				}
				break;
			}
			
			case '8':
			{
				i = 2;
				j = 1;
				if (m [i] [j] == 'X' || m [i] [j] == 'O')
				{
					r = 1;
					printf("Posicion ocupada. Ingrese otro numero\n\n");
				}
				break;
			}
			
			case '9':
			{
				i = 2;
				j = 2;
				if (m [i] [j] == 'X' || m [i] [j] == 'O')
				{
					r = 1;
					printf("Posicion ocupada. Ingrese otro numero\n\n");
				}
				break;
			}
		}
	}
	while (r == 1);
	
	m [i] [j] = 'O';
}

int ganador (char m [3] [3])
{
	if (m [0] [0] == 'X' || m [0] [0] == 'O')
	{
		if (m [0] [0] == m [0] [1] && m [0] [0] == m [0] [2])
		{
			if (m [0] [0] == 'X')
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
		if (m [0] [0] == m [1] [0] == m [0] [0] == m [2] [0])
		{
			if (m [0] [0] == 'X')
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
	}
	
	else if (m [1] [1] == 'X' == m [1] [1] == 'O')
	{
		if (m [1] [1] == m [0] [0] && m [1] [1] == m [2] [2])
		{
			if (m [1] [1] == 'X')
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
		if (m [1] [1] == m [1] [0] && m [1] [1] == m [1] [2])
		{
			if (m [1] [1] == 'X')
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
		if (m [1] [1] == m [2] [0] && m [1] [1] == m [0] [2])
		{
			if (m [1] [1] == 'X')
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
		if (m [1] [1] == m [0] [1] && m [1] [1] == m [2] [1])
		{
			if (m [1] [1] == 'X')
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
	}
	
	else if (m [2] [2] == 'X' || m [2] [2] == 'O')
	{
		if (m [2] [2] == m [2] [0] && m [2] [2] == m [2] [1])
		{
			if (m [2] [2] == 'X')
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
		if (m [2] [2] == m [0] [2] == m [2] [2] == m [1] [2])
		{
			if (m [2] [2] == 'X')
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
	}
	return 2;
}
