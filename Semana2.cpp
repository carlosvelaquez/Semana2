#include <iostream>
using namespace std;

//Condicional que para a la recursión: Caso Base
//Condicional que sigue con la recursión: Paso/Caso Recursivo

/* I. Semana 2, Día 1
	1. Versión Recursiva Factorial
	2. Versión Iteratica Factorial
	3. Versión Recursiva Sumatoria
	4. Versión Iterativa Sumatoria
 */

int menu();
void cleanBuffer();
int factorialRecursivo(int num, int suma);
int factorialIterativo(int num);
int sumatoriaRecursiva(int num, int suma);
int sumatoriaIterativa(int num);

int main(){
	do{
		switch(menu()){
			case 1:
				cout << "Ingrese un numero para calcular su factorial: ";
				int num;
				cin >> num;
				cout << "El factorial de " << num << " es: " << factorialRecursivo(num, 0) << endl;
				break;
			case 2:
				cout << "Ingrese un numero para calcular su factorial: ";
				cin >> num;
				cout << "El factorial de " << num << " es: " << factorialIterativo(num) << endl;
				break;
			case 3:
				cout << "Ingrese un numero para calcular su sumatoria: ";
				cin >> num;
				cout << "La sumatoria de " << num << " es: " << sumatoriaRecursiva(num, 0) << endl;
				break;
			case 4:
				cout << "Ingrese un numero para calcular su sumatoria: ";
				cin >> num;
				cout << "La sumatoria de " << num << " es: " << sumatoriaIterativa(num) << endl;
				break;
			case 5:
				return 0;
			default:
				cout << "Opción Inválida, por favor intente de nuevo" << endl;
				break;

			cout << "--------------------------" << endl;
		}

	}while(true);
}

int menu(){
	cleanBuffer();
	cout << "--------------------------" << endl << "Menú Principal" << endl << endl
		<< "1. Factorial Recursivo" << endl
		<< "2. Factorial Iterativo" << endl
		<< "3. Sumatoria Recursiva" << endl
		<< "4. Sumatoria Iterativa" << endl
		<< "5. Salir del Programa" << endl
		<< endl << "Ingrese el número de la opción que desea: ";

	int resp;
	cin >> resp;

	cout << "--------------------------" << endl;
	return resp;
}

int factorialRecursivo(int num, int suma){
	if(num == 0){
		return suma*1;	
	}else{

		if(suma == 0){
			suma += num;
		}else{
			suma *= num;
		}

		return factorialRecursivo(num-1, suma);
	}
}

int factorialIterativo(int num){
	int suma = 1;
	int num2 = num;
	for(int i = num; i > 0; i--){
		suma *= num2;
		num2--;
	}

	return suma;
}

int sumatoriaRecursiva(int num, int suma){
	if(num == 0){
		return suma;
	}else{
		suma += num;
		num--;
		return sumatoriaRecursiva(num, suma);
	}
}

int sumatoriaIterativa(int num){
	int suma = 0;
	int num2 = num;

	for(int i = num; i > 0; i--){
		suma += num;
		num --;
	}

	return suma;
}

void cleanBuffer(){
	std::cin.clear();
}

