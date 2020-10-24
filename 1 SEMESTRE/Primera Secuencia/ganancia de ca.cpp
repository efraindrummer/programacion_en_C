//individuo invierte su capital y desea saber cuanto ganara si el banco paga 2% mensual

#include <iostream>

using namespace std;

main(){
	
	int capital;
	
	cout << "\n\tingresar capital que desea invertir:  ";
	cin >> capital;
	
	int ganancias = capital * 2 / 100;
	cout << "\n\tlas ganancias fueron:  $" << ganancias << endl;
	
	cin.get();
	
	
}
