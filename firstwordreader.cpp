#include<iostream>
#include<fstream>
using namespace std;
int main(){
     int salir;
     string message;
     ifstream file("MiPeque�oPoni.txt");          
     file>>message;
     cout<<message<<endl;
     file.close();
     cin>>salir;
     return 0;
}
