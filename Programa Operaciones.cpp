//Hace operaciones con dos números que des

#include<iostream>

using namespace std;

int main(){
	int num1, num2;	//definimos las variables
	
	cout<<"Introduce un numero: "; cin>>num1;	//guardamos el numero introducido como num1
	cout<<"Introduce otro numero: "; cin>>num2;	//guardamos el numero introducido como num2
	
	cout<<"\nLa suma es: "<<num1 + num2<<endl;	//imprimimos la suma
	cout<<"La resta es: "<<num1 - num2<<endl;	//imprimimos la resta
	cout<<"La division es: "<<num1 / num2<<endl;	//imprimimos la division
	cout<<"La multiplicacion es: "<<num1 * num2<<endl;	//imprimimos la multiplicacion
	
	return 0;
}
