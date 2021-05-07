// FIBONACI.cpp: archivo de proyecto principal.

<// HALLAR PRIMOS.cpp: archivo de proyecto principal.

#include "stdafx.h"
#include "iostream"


using namespace System;
using namespace std;

void main()
	
{  long long n,pen,ult,cf,nuevo;
   do {cout<<"Entre la cantidad de números a generar:    ";   
   cin>>n; 
   if(n<2)cout<<"la cantidad peditada debe ser un múmero entero mayor que dos"<<endl;
   cout<<"volver a leer"<<endl;


   }while(n<2);
   pen=0;
   ult=1;
   cf=2;
   cout<<pen<<"   ";
   cout<<ult<<"    ";
   while(cf<n)
   {    
	   nuevo=pen+ult;
	   cf=cf+1;
	   cout<<nuevo<<"    ";
	    pen=ult;
		ult=nuevo;}
   cout<<endl;
   system("pause");}
   

// ConsoleApplication2.cpp: archivo de proyecto principal.
#include "iostream"
#include "stdafx.h"

using namespace std;
using namespace System;

void main()
{
	double m;
	cout << "ingrese el valor de su número:  ";
	cin >> m;
	
	if (m < 10) {
		m = sqrt(m);
	else { m = 0; }
		
	}
	cout << m << " es el valor de m" << endl;
	system("pause");
}



