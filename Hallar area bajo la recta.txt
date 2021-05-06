// Hallar are bajo la recta.cpp: archivo de proyecto principal.

#include "stdafx.h"
#include "iostream"
using namespace System;
using namespace std;
void main()
{
    double m,b,a1,a2,x,dtx,area;
	cout<<"ingrese la pendiente de la recta :  ";
	cin>>m;
	cout<<"Ingrese el termino independiente:  ";
	cin>>b;
	cout<<"Ingrese el limite  menor del intervalo:  ";
	cin>>a1;
	cout<<"Ingrese le limite superior del intervalo:  ";
	cin>>a2;
	cout<<"Ingrese el valor del delta de x:  ";
	cin>>dtx;
	x=a1;
	area=0;
	while(x<a2) 
	{ area=area+((m*x+b)*dtx);
	x=x+dtx; }
	cout<<"El area bajo la recta en el intervalo ("<<a1<<","<<a2<<") es "<<area<<endl;
	system("pause");
}
