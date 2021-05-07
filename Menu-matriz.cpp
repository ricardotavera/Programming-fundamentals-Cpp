#include "stdafx.h"
#include "iostream"
#include <conio.h>
using namespace System;
using namespace std;
void menu(int &opcion)
{
	Console::Clear();
	cout << "    MENU DE OPCIONES" << endl;
	cout << endl;
	cout << "    1. Leer matriz." << endl;
	cout << "    2. Desplegar matriz" << endl;
	cout << "    3. Salir" << endl << endl << endl;


	cout << "Entre opcion: " << endl;
	cin >> opcion;
}
void leerMatriz(int mat[10][10], int &m, int &n)
{
	int i, j;
	Console::Clear();
	cout << "Entre numero de filas dela matriz: " << endl;
	cin >> m;
	cout << "Entre numero de columnas dela matriz: " << endl;
	cin >> n;
	for (i = 0; i<m; i++)
		for (j = 0; j<n; j++)
		{
			cout << "Entre mat[" << i << "][" << j << "] = ";
			cin >> mat[i][j];
		}
}
void desplegarMatriz(int mat[10][10], int m, int n)
{
	int i, j;
	Console::Clear();
	cout << "Los elementos de la matriz son: " << endl;
	for (i = 0; i<m; i++)
	{
		for (j = 0; j<n; j++)cout << mat[i][j] << "  ";
		cout << endl;
	}
	cout << "Presione un caracter para continuar" << endl;
	getch();
}
void main()
{
	int mat[10][10], m, n, opcion;
	do
	{
		menu(opcion);
		switch (opcion)
		{
		case 1:leerMatriz(mat, m, n); break;
		case 2:desplegarMatriz(mat, m, n); break;
		case 3: exit;
		}
	} while (opcion != 3);
	getch();
}

