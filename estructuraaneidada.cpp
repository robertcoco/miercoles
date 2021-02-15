#include<iostream>
#include<conio.h>

using namespace std;

struct inf_facebook{
	int numero;
	char direccion[20];
	char correo[20];
};

struct usuario{
	char nombre[20];
	char contra[20];
	struct inf_facebook f_usuario;
}usuarios[2];


int main(){
	
	for(int i=0;i<2;i++){
		fflush(stdin);
		cout<<"nombre: ";
		cin.getline(usuarios[i].nombre,20,'\n');
		cout<<"numero: ";
		cin>>usuarios[i].f_usuario.numero;
		fflush(stdin);
		cout<<"direccion: ";
		cin.getline(usuarios[i].f_usuario.direccion,20,'\n');
		cout<<"correo: ";
		cin.getline(usuarios[i].f_usuario.correo,20,'\n');
		cout<<"contra: ";
		cin.getline(usuarios[i].contra,20,'\n');
		
		
	}
	cout<<endl;
	
	for(int i=0;i<2;i++){
		cout<<"nombre: "<<usuarios[i].nombre<<endl;
		cout<<"numero: "<<usuarios[i].f_usuario.numero<<endl;
		cout<<"direccion: "<<usuarios[i].f_usuario.direccion<<endl;
		cout<<"correo: "<<usuarios[i].f_usuario.correo<<endl;
		cout<<"contra: "<<usuarios[i].contra;
		cout<<endl;
	}
	getch();
	return 0;
}
