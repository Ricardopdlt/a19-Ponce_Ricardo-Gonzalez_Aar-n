//ej1 simPC2

#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace System;
using namespace std;


int Menu(int *option = new int)
{

	do
	{
		cout << endl;
		cout << "                 MENU DE OPCIONES                \n";
		cout << " =============================================== \n";
		cout << " 1. Hallar el n-"<<char(130)<<"simo t"<<char(130)<<"rmino \n";
		cout << " 2. Graficar \n";
		cout << " 3. Fin \n";
		cout << endl;
		cout << " Escoge una opci" << char(162) << "n: ";
		cin >> *option;
		cout << endl;

		return *option;

	} while (*option < 1 || *option >3);

}

void Fibonacii(int n)
{


	int num = 1;
	int ant = 1;

	int aux;


	if (n == 1 || n == 2)
	{
		num = 1;
	}

	else
	{

		for (int i = 0; i < n - 2; i++)
		{
			aux = num;
			num += ant;
			ant = aux;

		}
	}

	printf("\n");
	cout << " El t" << char(130) << "rmino " << n << " es: ";
	printf("%d", num);
	printf("\n\n");


}

void Gráfico()
{
	int n;

	int num = 1;
	int ant = 1;

	int aux;

	do
	{
		cout << endl;
		cout << " Ingrese el n" << char(163) << "mero de t" << char(130) << "rminos que desea que tenga el gr" << char(160) <<"fico: ";
		cin >> n;
		cout << endl;

	} while (n < 0);


	for (int j = 0; j < n; ++j)
	{

		int num = 1;
		int ant = 1;

		for (int i = 0; i <1; ++i)
		{
			cout << "  ";
		}

		for (int i = 0; i < n - j - 1; ++i)
		{
			cout << "  ";
		}
		for (int i = 0; i < 2 * j + 1; ++i)
		{
			if (i % 2 == 0)
			{
				if (i == 0 || i == 2)
				{
					num =1;
				}

				if (i > 2)
				{
					

					aux = num;
					num += ant;
					ant = aux;
				}

				cout << num << " ";
			}
			if (i % 2 != 0)
			{
				cout << "  ";
			}

		}
		cout << endl;
	}

}

int main()
{

	int *n1 = new int;
	int opt1 = 1;
	int *opt;
	opt = &opt1;

	do
	{
		Menu(opt);

		if (*opt == 1)
		{
			int n;

			do
			{
				cout << endl;
				cout << " Ingrese el n" << char(163) << "mero de t" << char(130) << "rmino que desea encontrar en la serie de Fibonacii: ";
				cin >> n;

			} while (n < 0);

			Fibonacii(n);

		}
		if (*opt == 2)
		{
			Gráfico();

		}
		if (*opt == 3)
		{
			return 0;
		}

		cout << endl;

		*n1 = 1;

	} while (*n1 == 1);

	delete n1;

	return 0;
}