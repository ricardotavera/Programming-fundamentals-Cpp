// triangulos.cpp: archivo de proyecto principal.

#include "stdafx.h"
#include "iostream"
using namespace System;
using namespace std;
 
void main()
{
   double a,b,c,h,c1,c2;
   cout<<"Ingrese el valor del lado 1:  ";
   cin>>a;
 cout<<"Ingrese el valor del lado 2:  ";
   cin>>b;
    cout<<"Ingrese el valor del lado 3:  ";
   cin>>c;
  if(a>b && a>c)  
  { h=a; c1=b; c2=c;}
  else 
  { if(b>c) 
  { h=b; c1=a; c2=c;}
  else 
  { 
	  h=c;
	  c1=a; c2=b; }

  }

   if((c1+c2)>h) 
   {  cout<<"Los lados forman un triangulo"<<endl;
      if(a==b && a==c) 
	  { cout<<"Es equilatero"<<endl;}
	  else
	  {  if(a!=b && a!=c && b!=c) 
	  { cout<<"Es escaleno"<<endl;} 
	  else
	  { cout<<"Es isoceles"<<endl;}
	  }
   } else 
   { cout<<"Los lados no forman un triangulo"<<endl;}
     
   system("pause");
 
}
