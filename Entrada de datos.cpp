//Entrada de datos C++ (cin)

/*
Para hacer una entrada de datos primero definimos la variable, en este caso numero que ser� un n�mero ya que le hemos puesto int.
Luego le diremos a la persona que ponga un n�mero.
Para que el programa lea un n�mero se usa cin y luego se pone la variable a la que se destina lo que se ponga.
Por �ltimo el programa devuelve el n�mero que se ha escrito.
*/

//En el caso de querer que el n�mero sea decimal, en vez de int pondr�amos float.

#include<iostream>

using namespace std;

int main(){
	int numero;
	
	cout<<"Pon un numero: ";
	cin>>numero;
	
	cout<<"\nTu numero es "<<numero;
	
	return 0;
}
