// ESTADISTICA DE VECTOR.cpp: archivo de proyecto principal.

#include "stdafx.h"
#include "iostream"
#include "Math.h"
using namespace System;
using namespace std;

void leervector(double V[20], int &n)
{
	int  i;
	do {
		cout << "Ingrese el tamano del vector (max 20):   ";
		cin >> n;
		if (n > 20) {
			cout << "El tamano ingresado excede el limite. " << endl;
			
			cout << "     =======================" << endl;
			cout << "       VUELVA A INTENTARLO" << endl;
			cout << "       ===================" << endl;
		}
	} while (n > 20);

	for (i = 0; i < n; i++)
	{
		cout << "Ingrese V[" << i << "]:  ";
		cin >> V[i];
	}
}

void mostrarvector(double V[20], int n)
{
	int i;
	cout << "El vector leido fue:  " << endl;
	for (i = 0; i < n; i++)
	{
		cout << "V[" << i << "]:  " << V[i] << endl;
	}
}

void ordenarvector(double V[20], int n)
{
	double tem;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (V[j] < V[i])
			{
				tem = V[i];
				V[i] = V[j];
				V[j] = tem;
			}
		}
	}
	cout << "El vector ordenado es:   " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "V[" << i << "]:  " << V[i] << endl;
	}

}

void calcularmediana(double V[20], int n)
{
	
	double mediana;
	if (n % 2 == 0)
	{
		mediana = (V[n / 2] + V[(n / 2) - 1]) / 2;
	}
	else 
	{  
		mediana = V[(n - 1) / 2];
	} 
	cout << "La mediana del vector es  " << mediana << endl;
}

void calcularsumamedia(double V[20], int n, double  &media)
{
	double suma;
	media = 0;
	for (int i = 0; i < n; i++)
	{
		suma = suma + V[i];
	} 
	cout << "La suma del vector es: " << suma << endl;
	cout << "La media del vector es:  " << suma / n << endl;
	media = suma / n;
}

void calcularvarianza(double V[20], int n, double media,double &varianza)
{
	
	varianza = 0;
	for (int i = 0; i < n; i++)
	{
		varianza = varianza + (V[i]-media )*(V[i]-media );
		
	} 
	cout << "La varianza del Vector es:  " << varianza/(n-1) << endl;
	varianza = varianza / (n - 1);
}

void calculardesviacionestandar(double varianza)
{
	double desvi;
	desvi = sqrt(varianza);
	cout << "La desviancion estandar del vector es:  " << desvi << endl;


}

void main()
{
	double V[20], media, varianza;
	int n;
	leervector(V, n);
	mostrarvector(V, n);
	ordenarvector(V, n);
	calcularmediana(V, n);
	calcularsumamedia(V, n, media);
	calcularvarianza(V, n, media,varianza);
	calculardesviacionestandar(varianza);
	system("pause");
}
