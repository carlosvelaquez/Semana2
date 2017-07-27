#include <iostream>

using namespace std;

int menu();
void leerElementos();

int main(){
	menu();
	cout << "Test" << endl;
	return 0;
}

void leerElementos(int arreglo[], int size){
	
	for (int i = 0; i < size; i++){
		cout << "Ingrese el valor para la casilla " << i << ":";
	}
}

int menu(){

	int opcion = 0;
	
	while (opcion == 0){
		cout << "- Menú Principal  - " << endl << "1. Leer Elementos" << endl
		<< endl << "Seleccione una opcion: ";
		
		cin >> opcion;
		
		if (opcion != 1){
			cout << endl << "La opción ingresada no es válida." << endl
			<< "Intente nuevamente" << endl << endl;
			opcion = 0;
		}//if
		cout << endl;

		if (opcion == 1){
			cout << "Opción 1 seleccionada - Leer Elementos.";
			//leerElementos();
		}


	}//while

	return opcion;
}

