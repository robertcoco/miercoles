#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

struct carros{
	char marca[40];
	int  precio;
}carro1,carro2;

int main(){
	cout<<"introduce la marca del auto numero: ";
    cin.getline(carro2.marca,40,'\n');
	cout<<"introduce la el precio de auto numero2: ";
	cin>>carro2.precio;
	
	
	cout<<"introduce la marca del auto numero1: ";
	cin.getline(carro1.marca,40,'\n');
	cin.getline(carro1.marca,40,'\n');
	cout<<"introduce la el precio de auto numero1: ";
	cin>>carro1.precio;
	cout<<endl;

	
	cout<<"imprimiendo datos de los autos"<<endl;
	cout<<"este es el nombre del carro numero1: "<<carro1.marca<<endl;
	cout<<"este es el precio del carro numero1: "<<carro1.precio<<endl;
	
	cout<<"\neste es el nombre del carro numero2: "<<carro2.marca<<endl;
	cout<<"este es el precio del carro numero2: "<<carro2.precio<<endl;
	
	
	
	getch();
	return 0;
}	cin.getline(carro1.marca,40,'\n');
