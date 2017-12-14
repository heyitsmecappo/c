#include<iostream>
#include<fstream>
using namespace std;
int main(){
     int salir;
     ifstream file("MiPequeñoPoni.txt");
     while(file.eof()!=1){                      
                      string message;          
                      getline(file,message);
                      if(file.eof()!=1){
                                        cout<<message;
                                        cout<<endl;
                                        }
                      }
     cin>>salir;
     return 0;
}
