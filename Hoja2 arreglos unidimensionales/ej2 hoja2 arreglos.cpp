//Hoja2.Arreglos.Ejercicio2
#include <iostream>
#include <time.h>
#include <cstdlib>
#include <conio.h>
#include <stdio.h>

using namespace std;

//Generar valor aleatorio dentro del rango establecido
void GENERAR(int *num, int n) {
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		num[i] = 1 + rand() % (101 - 1);
		cout << "El número " << i + 1 << " es: " << num[i] << endl;
	}
}

//Graficar 
void GRAFICAR(int *num, int *n) {
	for (int i = 0; i < *n; i++)
	{
		if (num[i] > num[i + 1])
		{
			cout << num[i] << endl;
		}
		else
		{
			cout << num[i] << " ";
		}
	}
}

//Ordenar valores
void ORDENAR(int*num, int n) {
	int aux;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - 1; j++)
		{
			if (num[j] > num[j + 1])
			{
				aux = num[j];
				num[j] = num[j + 1];
				num[j + 1] = aux;
			}
		}
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{

		cout << "El n" << char(163) << "mero " << i + 1 << " es: " << num[i] << endl;
	}
}

int main() {
	//Variables
	int n;
	int*num = new int[n];

	//1°
	do
	{
		cout << "N"<<char(163)<<"mero de elementos: ";
		cin >> n;
	} while (n < 0);
	GENERAR(num, n);
	cout << endl;

	//2°
	cout << endl << "Ordenado Ascendentemente: " << endl << endl;
	ORDENAR(num, n);
	cout << endl;

	//3°
	cout << endl << "Gr"<<char(160)<<"fico: " << endl << endl;
	GRAFICAR(num, &n);
	cout << endl;

	_getch();
}