//Entrada de datos C++ (cin)

/*
Para hacer una entrada de datos primero definimos la variable, en este caso numero que será un número ya que le hemos puesto int.
Luego le diremos a la persona que ponga un número.
Para que el programa lea un número se usa cin y luego se pone la variable a la que se destina lo que se ponga.
Por último el programa devuelve el número que se ha escrito.
*/

//En el caso de querer que el número sea decimal, en vez de int pondríamos float.

#include<iostream>

using namespace std;

int main(){
	int numero;
	
	cout<<"Pon un numero: ";
	cin>>numero;
	
	cout<<"\nTu numero es "<<numero;
	
	return 0;
}
