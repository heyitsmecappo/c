#include<iostream>
#include<fstream>
using namespace std;
int main(){
     int salir;
     ifstream file("MiPeque�oPoni.txt");
     string message;          
     getline(file,message);
     cout<<message;
     cin>>salir;
     }
