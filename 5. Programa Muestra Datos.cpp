/*
Realize un programa que que pida los siguientes datos a la persona

	Edad: numero entero
	Sexo: caracter
	Estatura en metros: numero real
	
Tras leer los datos el programa debe mostrarlos.
*/

#include<iostream>

using namespace std;

int main(){
	int edad;
	char sexo[10];
	float estatura;
	
	cout<<"Introduce tu edad: "; cin>>edad;
	cout<<"Introduce tu sexo: "; cin>>sexo;
	cout<<"Introduce tu estatura: "; cin>>estatura;
	
	cout<<"\nTienes "<<edad<<endl;
	cout<<"Tu sexo es "<<sexo<<endl;
	cout<<"Mides "<<estatura<<" metros"<<endl;
	
	return 0;
}
