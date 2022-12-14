//Escribe la siguiente expresión: (a/b)+1

#include<iostream>

using namespace std;

int main(){
	float a, b, resultado = 0;
	
	cout<<"La expresion es '(a/b)+1'.\n";
	cout<<"Introduce el numero a: "; cin>>a;
	cout<<"Introduce el numero b: "; cin>>b;
	
	resultado = (a/b)+1;
	
	cout.precision(3);	//Esto sirve para redondear el número, en este caso queremos que aparezcan 3 dígitos
	cout<<"El resultado es: "<<resultado;
	return 0;
}
