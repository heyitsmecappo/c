#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    string line;
    string ruta;
    int salir;
    int repeat;
    cout<<"dime la ruta a tu fichero:    ";
    getline(cin,ruta);
    ifstream file(ruta.c_str());
    do{
       if(file.fail()==1){
                                         cout<<"ERROR tu ruta no se ha encontrado"<<endl;
                                         cout<<"Introduzca otra vez la ruta:   ";
                                         cin>>salir;
                                         repeat=1;
                                         }
       else{
            repeat=0;
            }
       
       }while(repeat==1);
       while(file.eof()==0){
                                         getline(file,line);
                                         cout<<line<<endl;
                                         }
    file.close();
    cin>>salir;                                                 
    return 0;
}   
