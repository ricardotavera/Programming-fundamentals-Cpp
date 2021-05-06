// coseno por polinomio de taylor.cpp: archivo de proyecto principal.

#include "stdafx.h"
#include "iostream"

using namespace System;
using namespace std;
void main()
{  const double pi=3.14159265;
   int i,n;
   double x,num,den,cos,sig,m;
   cout<<"Entre angulo a calcular en grados:  ";
   cin>>x;
   x=(x*pi)/180;
   cout<<"Entre la cantidad de terminos a calcular:  ";
   cin>>n;
   num=1;
   den=1;
   cos=0;
   sig=1;
   m=0;
   for(i=0;i<n;i++) {          
              cos=cos+sig*(num/den);
				  num=num*x*x;
			  den=den*(m+1)*(m+2);
			  sig=-sig;
			  m=m+2;}
   cout<<" Cos("<<x*(180/pi)<<") = "<<cos<<endl;
   system("pause");
   
   }
