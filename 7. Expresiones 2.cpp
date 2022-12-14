//Escribe la expresion (a+b)/(c+d)

#include<iostream>

using namespace std;

int main(){
	int a, b, c, d, resultado = 0;
	
	cout<<"La expresion es (a+b)/(b+c)."<<endl;
	
	cout<<"Introduce el numero a: "; cin>>a;
	cout<<"Introduce el numero b: "; cin>>b;
	cout<<"Introduce el numero c: "; cin>>c;
	cout<<"Introduce el numero d: "; cin>>d;
	
	resultado = (a+b)/(c+d);
	
	cout<<"El sesultado es: "<<resultado<<endl;
	
	return 0;
}
