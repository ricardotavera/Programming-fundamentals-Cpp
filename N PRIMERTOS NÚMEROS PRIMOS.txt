// HALLAR PRIMOS.cpp: archivo de proyecto principal.

#include "stdafx.h"
#include "iostream"


using namespace System;
using namespace std;

void main()
{  int num,cp,n,h,res,div;
   cout<<"Entre la cantidad de números a generar:    ";
   cin>>n;
   cp=0;
   num=1;
   while(cp<n)
   {num=num+1;
   h=1;
  
   	   for(div=2;div<num;div++)
	   { res=(num%div); if(res==0)h=0;}
	   if(h==1){ cp=cp+1;
	   cout<<num<<"  ";}} cout<<endl;
	   system("pause");
	      
}
