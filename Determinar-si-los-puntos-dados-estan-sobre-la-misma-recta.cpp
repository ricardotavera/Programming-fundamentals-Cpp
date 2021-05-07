// Saber cuales puntos estan bajo la recta.cpp: archivo de proyecto principal.

#include "stdafx.h"
#include "iostream"
using namespace System;
using namespace std;
void main()
{
    double m,b,n,x,y,cs,ce,cd,yc;
	cout<<"ingrese la pendiente de la recta :  ";
	cin>>m;
	cout<<"Ingrese el termino independiente:  ";
	cin>>b;
	cout<<"Ingrese cuantos puntos se van a evaluar: ";
	cin>>n;
	cs=0;
	ce=0;
	cd=0;
	for(int i=1; i<=n; i++) 
	{ cout<<"Ingrese la cordenada en x:  ";
	  cin>>x;
	  cout<<"Ingrese la cordenada en y:  ";
	  cin>>y; 
	  yc=m*x+b;
	  cout<<"y = "<<m<<" * "<<x<<" + "<<b<<" = "<<yc<<endl;
	  if(yc==y)
	  { cs=cs+1;}
	  else
	  { if(y>yc)
	  {  ce=ce+1;}
	  else {
		  cd=cd+1;}
	  }
	}	cout<<"Hay "<<cs<<" sobre la recta"<<endl;
	    cout<<"Hay "<<ce<<" encima de la recta"<<endl;
		cout<<"Hay "<<cd<<" bajo la recta "<<endl;
	system("pause");
}