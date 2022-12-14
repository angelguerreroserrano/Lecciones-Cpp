/*
Escriba un programa que intercambie los valores de
dos variables
*/

#include<iostream>

using namespace std;

int main(){
	int x, y, aux;
	
	cout<<"Introduce el valor de x: "; cin>>x;
	cout<<"Introduce el valor de y: "; cin>>y;
	
	aux = x;
	x = y;
	y = aux;
	
	cout<<"\nAhora el valor de x es: "<<x<<endl;
	cout<<"Ahora el valor de y es: "<<y<<endl;
	return 0;
}
