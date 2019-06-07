//ej3 simPC2

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <cstdlib>
#include <time.h>


using namespace System;
using namespace std;

void GenerarMostrarDatos(int *VPuntajes,int n)
{
	cout << endl;
	cout << "      PUNTAJES DE ALUMNOS     \n";
	cout << " ============================ \n";
	cout << endl;

	srand(time(NULL));

	for (int i = 0; i < n ; i++)
	{

		VPuntajes[i] = 0 + rand() % (51 - 1);
		cout << " Puntaje del alumno " << i + 1 << ": " << VPuntajes[i] << endl;
	}

}

void Lista_DebajodelPromedio(int *VPuntajes, int n)
{
	int sumadepuntajes = 0.0;
	double promedio = 0.0;

	cout << endl;
	cout << " PUNTAJES DEBAJO DEL PROMEDIO \n";
	cout << " ============================ \n";
	cout << endl;


	for (int i = 0; i < n; i++)
	{
		sumadepuntajes = sumadepuntajes + VPuntajes[i];

	}
	promedio =  sumadepuntajes / n;

	cout << " El promedio es: " << promedio << endl;
	cout << endl;

	for (int i = 0; i < n; i++)
	{
		if (VPuntajes[i] < promedio)
		{
			cout << " Alumno " << i + 1 <<": " << VPuntajes[i]<<endl;
		}

	}

}

void Devuelve_menor(int *VPuntajes, int n)
{
	int min = 50;
	int menor = 0;

	for (int i = 0; i < n; i++)
	{
		if (VPuntajes[i] < min)
		{

			min = VPuntajes[i];
		}

	}

	cout << " El menor puntaje es: " << min;

	for (int i = 0; i < n; i++)
	{
		if (VPuntajes[i] == min)
		{
			menor++;
		}

	}

	cout << endl;
	cout << " " << menor << " alumnos obtuvieron el menor puntaje." <<endl;
	cout << endl;

}

int main()
{
	int n;
	n = 40;
	int *VPuntajes;
	VPuntajes = new int[n];

	GenerarMostrarDatos(VPuntajes,n);
	Lista_DebajodelPromedio(VPuntajes, n);
	cout << endl;
	Devuelve_menor(VPuntajes, n);

	cout << " " << system("pause");

}