//Hoja2.Arreglos.Ejercicio3
#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

//Impresion de arreglo
void ImprimirArreglo(int* vec, int nele) {
	for (int a = 0; a < nele; a++)
	{
		cout << vec[a] << " ";
	}
	cout << endl;
}

int main() {

	//Variables
	int nele;
	int *vec = new int[nele];

	do {
		cout << "Ingrese la cantidad de elementos : ";
		cin >> nele;
	} while (nele <= 0);
	for (int a = 0; a < nele; a++)
	{
		vec[a] = a + 2;
	}
	cout << endl;

	//1°
	cout << "Arreglo: ";
	ImprimirArreglo(vec, nele);
	for (int a = 0; a < nele; a++) {
		if (vec[a] != -1) {
			for (int b = a + 1; b < nele; b++) {
				if (vec[b] % vec[a] == 0) {
					vec[b] = -1;
				}
			}
		}
	}
	cout << endl;

	//2°
	cout << "N"<<char(163)<<"meros primos a partir del arreglo: ";
	ImprimirArreglo(vec, nele);
	cout << endl;

	_getch();
	return 0;
}