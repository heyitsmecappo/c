#include<iostream>
#include<fstream>
using namespace std;
int main(){
     int salir;
     ifstream file("MiPequeñoPoni.txt");
     for(int x=1;x<5;x++){                      
                      string message;          
                      getline(file,message);
                      cout<<message;
                      cout<<endl;
                      }
     cin>>salir;
     return 0;
}
