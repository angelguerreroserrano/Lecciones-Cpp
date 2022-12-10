//Datos simples de C++

/*
Tenemos cuatro tipos de datos simples.
--------------------------------------
int, para números enteros.
float, para números decimales.
double, para números con varios decimales.
char, para texto.
*/

//endl sirve para que lo próximo que escriba el programa lo haga en la próxima línea. Es como un enter.

#include<iostream>

using namespace std;

int main(){
	int entero = 5;
	float decimal = 4.3;
	double grande = 5.3456324;
	char letra = 'hola';
	
	cout<<entero<<endl;
	cout<<decimal<<endl;
	cout<<grande<<endl;
	cout<<letra<<endl;
	
	return 0;
}
