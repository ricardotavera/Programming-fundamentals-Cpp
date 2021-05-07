// parcial.cpp: archivo de proyecto principal.

#include "stdafx.h"
#include "iostream"
using namespace System;
using namespace std;

void main()
{
	int n, k, i, t;
	do {
		cout << "Ingrese el valor de n: "; cin >> n;


	} while (n < 10);
	
	k = 0;
	do { n = n - 2; 
	for (i = 1; i < n; i = i + 2) {
		i = t; while (t > (n / 2)) {
			if (t % 2 == 0) k = k + 1;
			else k = k - 1;
		} t = t - 1;
		
		}
	} while (k > 0); cout << k << endl;
	system("pause");
	
    
}