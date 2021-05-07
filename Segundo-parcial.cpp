// EVALUACION.cpp: archivo de proyecto principal.

#include "stdafx.h"
#include "iostream"
using namespace System;
using namespace std;
void main()
{
   int n,i,a,num,res;
   cout<<"Ingrese la cantidad de numeros a evaluar:  ";
   cin>>n;
   for(i=1;i<=n;i++) 
   { cout<<"Escriba el numero al que desea hallar la suma de sus divisores:  ";
   cin>>num;
     res=0;
	 for(a=2;a<=(num/2);a++)
	 { if(num%a==0) 
	 { res=res+a;}
	 }  cout<<res<<endl;  }
   system("pause"); 
}
