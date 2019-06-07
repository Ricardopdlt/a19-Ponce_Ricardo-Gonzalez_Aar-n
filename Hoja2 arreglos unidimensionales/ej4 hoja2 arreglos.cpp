// ej4 hoja2 arreglos

#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;
using namespace System;

int main()
{
	int n;

	int let = 0;// letra normal
	int num = 0;// numero entero
	int espe = 0;// carácter especial
	int spac = 0; // espacios (no tienen valor)

	int costo; // costo del envío del mensaje


	char *VMensaje = new char[n];

	cout << endl;

	do
	{
		cout << " Ingrese el tama" << char(164) << "o del mensaje: ";
		cin >> n;

	} while (n <= 0);

	cout << " Ingrese el mensaje (car" << char(160) << "ter por car" << char(160) << "cter) ( | = espacio): ";
	
	for (int i = 0; i < n; i++)
	{
		cin >> VMensaje[i];

		if    (toupper(VMensaje[i]) == 'Q' || toupper(VMensaje[i]) == 'W' || toupper(VMensaje[i]) == 'E' || toupper(VMensaje[i]) == 'T' 
			|| toupper(VMensaje[i]) == 'Y' || toupper(VMensaje[i]) == 'U' || toupper(VMensaje[i]) == 'I' || toupper(VMensaje[i]) == 'O' 
			|| toupper(VMensaje[i]) == 'P' || toupper(VMensaje[i]) == 'A' || toupper(VMensaje[i]) == 'S' || toupper(VMensaje[i]) == 'D' 
			|| toupper(VMensaje[i]) == 'F' || toupper(VMensaje[i]) == 'G' || toupper(VMensaje[i]) == 'H' || toupper(VMensaje[i]) == 'J' 
			|| toupper(VMensaje[i]) == 'K' || toupper(VMensaje[i]) == 'L' || toupper(VMensaje[i]) == 'Z' || toupper(VMensaje[i]) == 'X' 
			|| toupper(VMensaje[i]) == 'C' || toupper(VMensaje[i]) == 'V' || toupper(VMensaje[i]) == 'B' || toupper(VMensaje[i]) == 'N' 
			|| toupper(VMensaje[i]) == 'M' )
		{
			let++;
		}
		
		else
		{
			if   ( VMensaje[i] == '0' || VMensaje[i] == '1' || VMensaje[i] == '2' || VMensaje[i] == '3' 
				|| VMensaje[i] == '4' || VMensaje[i] == '5' || VMensaje[i] == '6' || VMensaje[i] == '7' 
				|| VMensaje[i] == '8' || VMensaje[i] == '9')
			{
				num++;
			}
			else
			{
				if (VMensaje[i] == '|')
				{
					VMensaje[i] = char(32);
					spac++;
				}
				else
				{
					espe++;
				}
			}
		}

	}

	cout << endl;

	cout << " El mensaje es: ";

	for (int i = 0; i < n; i++)
	{
		cout << VMensaje[i];
	}
	cout << endl;

	costo = let * 10 + num * 20 + espe * 30 + spac*0;

	cout << " El costo del mensaje es: " <<costo<< endl;

	cout << endl;

	cout << " " << system("pause");
}