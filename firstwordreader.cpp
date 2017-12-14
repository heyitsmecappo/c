#include<iostream>
#include<fstream>
using namespace std;
int main(){
     int salir;
     string message;
     ifstream file("MiPequeñoPoni.txt");          
     file>>message;
     cout<<message<<endl;
     file.close();
     cin>>salir;
     return 0;
}
