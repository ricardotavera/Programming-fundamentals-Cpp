// Datos estadisticos menu.cpp: archivo de proyecto principal.

// MENU ESTADISTICOS.cpp: archivo de proyecto principal.
#include "stdafx.h"
#include "iostream"
using namespace System;
using namespace std;
void leerMuestra(double A[], int &n)
{
	int i;
	cout << "Entre tamanho de la muestra: ";
	cin >> n;
	cout << "Entre los elementos de la muestra" << endl;
	for (i = 0; i<n; i++)
	{
		cout << "entre A[" << i << "] = ";
		cin >> A[i];
	}
}
void media(double A[], int n, double &med)
{
	int i;
	med = 0;
	for (i = 0; i<n; i++)med = med + A[i];
	med = med / n;
	cout << "La media muestral es: " << med << endl;
}
void ordenar(double A[], int n)
{
	int i, j;
	double temp;
	for (i = 0; i<n - 1; i++)
		for (j = i + 1; j<n; j++)
		{
			if (A[j]<A[i])
			{
				temp = A[i];
				A[i] = A[j];
				A[j] = temp;
			}
		}
}
void mediana(double A[], int n)
{
	double mediana;
	ordenar(A, n);
	if ((n % 2) == 0)
	{
		mediana = (A[n / 2] + A[(n / 2) - 1]) / 2;
	}
	else
	{
		mediana = A[n / 2];
	}
	cout << "La mediana muestral es: " << mediana << endl;
}
void varianza(double A[], int n, double med)
{
	int i;
	double varianza;
	varianza = 0;
	for (i = 0; i<n; i++)varianza = varianza + (A[i] - med)*(A[i] - med);
	varianza = varianza / (n - 1);
	cout << "La varianza muestral es: " << varianza << endl;
}
void menuOpciones()
{
	double A[10], med;
	int n, opcion;
	do
	{
		Console::Clear();
		cout << endl << endl << endl;
		cout << " OPCIONES DEL PROGRAMA" << endl << endl;
		cout << " 1: Leer Datos de la Muestra" << endl;
		cout << " 2: Calcular Media" << endl;
		cout << " 3: Calcular Mediana" << endl;
		cout << " 4: Calcular Varianza" << endl;
		cout << " 5: salir" << endl << endl << endl;
		cout << " Entre opcion: ";
		cin >> opcion;
		Console::Clear();
		switch (opcion)
		{
		case 1:leerMuestra(A, n); break;
		case 2:media(A, n, med); break;
		case 3:mediana(A, n); break;
		case 4:varianza(A, n, med); break;
		case 5:break;
		default:cout << "OPCION INCORRECTA" << endl;
		}
		cout << "Para volver al menu" << endl;
		system("pause");
	} while (opcion != 5);
}
void main()
{
	menuOpciones();
}
