//Hoja2.Arreglos.Ejercicio1
#include <iostream>
#include <time.h>
#include <cstdlib>
#include <conio.h>
#include <stdio.h>

using namespace std;

//Generacion de valores aleotorios dentro del rango establecido
void GENERAR(int *num, int n) {
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		num[i] = 5 + rand() % (31 - 5);
		cout << "El perno " << i + 1 << " tiene " << num[i] << " de di" <<char(160)<<"metro" << endl;
	}
}

//Ordenar datos  de manera descendete
void ordenar_descendiente(int *num, int n) {
	int aux;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - 1; j++)
		{
			if (num[j] < num[j + 1])
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
		cout << "El perno " << i + 1 << " tiene: " << num[i] << " de di" << char(160) << "metro" << endl;
	}
}

//Hallar promedio
void promedio(int *arr, int n) {
	double suma = 0;
	double prom;
	for (int i = 0; i < n; i++)
	{
		suma += arr[i];
	}
	prom = suma / n;
	cout << "El di" << char(160) << "metro promedio es: " << prom << endl;
}

//Lote defectuoso
void DEF(int *arr, int n, int DE) {
	int cont = 0;
	for (int i = 0; i < n; i++)
	{
		if (DE > arr[i])
		{
			cont++;
		}
	}
	if (cont > (n / 2))
	{
		cout << "Lote defectuoso" << endl;
	}
	else
	{
		cout << cont << " perno(s) tiene(n) un di" << char(160) << "metro inferior a " << DE << endl;
	}
}

int main() {

	//Variables
	int n;
	int *num = new int[n];
	int DE;

	//Ingreso y salida de valores
	do
	{
		cout << "Ingrese N: ";
		cin >> n;
	} while (n <= 0);
	cout << endl;

	//1°
	cout << "Arreglo original: " << endl;
	GENERAR(num, n);
	cout << endl;

	//2°
	cout << "Arreglo ordenado: " << endl;
	ordenar_descendiente(num, n);
	cout << endl;

	//3°
	promedio(num, n);
	cout << endl;
	do
	{
		cout << "Ingrese el di" << char(160) << "metro DE: ";
		cin >> DE;
	} while (DE <= 0);
	cout << endl;

	//4°
	DEF(num, n, DE);
	cout << endl;

	system("pause");
}