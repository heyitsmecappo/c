#include<iostream>
#include<fstream>
using namespace std;
int main(){
    struct datos{
           string nombre;
           int telefono;
           string email;
           int dia;
           int mes;
           int ano;
 };
 int y;
 int x;
 int z;
 int salir;
 //voy a hacerlo bilingue
 cout<<"English - 1    Espanol - 2:    "<<endl;
 cin>>z;
 if(z=2){
         cout<<"Cuantos amigos tienes?:    "<<endl;
         cin>>y;
         datos amigo[y];

         for(x=0;x<y;x++){
                  cout<<"Datos amigo"<<x+1<<":"<<endl; 
                  cout<<"Nombre:   ";
                  cin>>amigo[x].nombre;
                  cout<<"Telefono:     ";
                  cin>>amigo[x].telefono;
                  cout<<"E-mail:   ";
                  cin>>amigo[x].email;
                  cout<<"Día de nacimiento:   ";
                  cin>>amigo[x].dia;
                  cout<<"Mes de nacimiento:   ";
                  cin>>amigo[x].mes;
                  cout<<"Ano de nacimiento:   ";
                  cin>>amigo[x].ano;
                  }                       
//quiero guardar la agenda en un fichero            
         ofstream file("Agenda de teléfono.txt");
                  for(x=0;x<y;x++){
                     file<<"Datos amigo"<<x+1<<endl;                                              
                     file<<"Nombre:   "<<amigo[x].nombre<<endl;
                     file<<"Telefono:     "<<amigo[x].telefono<<endl;
                     file<<"E-mail:   "<<amigo[x].email<<endl;
                     file<<"Cumpleaños:   "<<amigo[x].dia<<"/"<<amigo[x].mes<<"/"<<amigo[x].ano<<endl;
                     file.close();
}
return 0;
}
else; 
      cout<<"How many friends do you have?:    "<<endl;
         cin>>y;
         datos amigo[y];

         for(x=0;x<y;x++){
                  cout<<"friend"<<x+1<<"info:"<<endl; 
                  cout<<"Name:   ";
                  cin>>amigo[x].nombre;
                  cout<<"Phone:     ";
                  cin>>amigo[x].telefono;
                  cout<<"E-mail:   ";
                  cin>>amigo[x].email;
                  cout<<"Birthday day:   ";
                  cin>>amigo[x].dia;
                  cout<<"Birthday month:   ";
                  cin>>amigo[x].mes;
                  cout<<"Birthday year:   ";
                  cin>>amigo[x].ano;
                  }                                   
         ofstream file("List of contacts.txt");
                  for(x=0;x<y;x++){
                     file<<"friend"<<x+1<<"info:"<<endl;                                              
                     file<<"Name:   "<<amigo[x].nombre<<endl;
                     file<<"Phone:     "<<amigo[x].telefono<<endl;
                     file<<"E-mail:   "<<amigo[x].email<<endl;
                     file<<"Birthday date:   "<<amigo[x].dia<<"/"<<amigo[x].mes<<"/"<<amigo[x].ano<<endl;
                     file.close();
}   
return 0;
}
