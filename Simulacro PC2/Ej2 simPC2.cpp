//ej2 simPC2

#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace System;
using namespace std;

void Determinar_area_perimetro(double *lado, double *area, double *perimetro)
{
	*area = pow(*lado, 2) / *area;


	*perimetro = 4 * *lado / *perimetro;

}
int main()
{
	double n1; 
	double *n;
	n = &n1;

	double area1;
	area1 = 1;
	double *realArea;
	realArea = &area1;

	double per1;
	per1 = 1;
	double *realPer;
	realPer = &per1;

	do
	{
		cout << " Ingrese el tama" << char(164) << "o del lado del cuadrado: ";
		cin >> *n;

	} while (n < 0);


	Determinar_area_perimetro(n, realArea, realPer);

	cout << endl;
	cout << " El " << char(160) << "rea del cuadrado es " << area1 << endl;
	cout << " El per" << char(161) << "metro del cuadrado es " << per1 << endl;
	cout << endl;

	cout << " " << system("pause");

}