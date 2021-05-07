// Sumatoria.cpp: archivo de proyecto principal.

#include "stdafx.h"
#include "iostream"
using namespace System;
 using namespace std; 
void main()
{
   int n,suma,i,ter,j;
   cout<<"Ingrese la potencia a la que desea ir sumando con los primero n terminos hasta la potencia:  ";
   cin>>n;
   suma=0;
   for(i=0; i<=n; i++) {
         ter=1;
		 for(j=1;j<=n;j++) {ter=ter*i;}
          suma=suma+ter;
          }
   cout<<"la suma de los primeros "<<n<<" terminos comenzando desde cero es  "<<suma<<endl;
   system("pause");
}