/*
Crea un programa que pregunte la nota final de 4 alumnos
y luego te diga la media
*/

#include<iostream>

using namespace std;

int main(){
	float a, b, c, d, media = 0;
	
	cout<<"Introduce la nota de 4 alumnos: "<<endl;
	cin>>a; cin>>b; cin>>c; cin>>d;
	
	media = (a+b+c+d)/4;
	cout<<"\nLa media de los 4 alumos es: "<<media<<endl;
	
	return 0;
}
