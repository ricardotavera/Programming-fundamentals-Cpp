// nfactorial.cpp: archivo de proyecto principal.


#include "stdafx.h"
#include "iostream"


using namespace System;
using namespace std;

void main()
	
{
    int n,i,factorial;
	cout<<"Entre el valor a factorar:   ";
	cin>>n;
	factorial=1;
	i=1;
	while(i<=n) {
		factorial=factorial*i;
		i=i+1;}

	cout<<"el factorial de  "<<n<<"  es  "<<factorial<<endl;
	system("pause");
}
