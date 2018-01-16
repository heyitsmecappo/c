//estructuras y tal

#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    struct datos{
           string nombre;
           int edad;
           char genero;
 };
 datos amigo[4];
 int x;
 int salir;
 for(x=0;x<4;x++){
                  cout<<"Nombre   ";
                  cin>>amigo[x].nombre;
                  cout<<"Edad     ";
                  cin>>amigo[x].edad;
                  cout<<"Genero   ";
                  cin>>amigo[x].genero;
                  }                  
cin>>salir;
    return 0;
}
