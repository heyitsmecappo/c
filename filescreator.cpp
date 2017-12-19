#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream file("MiPequeñoPoni2.txt");
    file<<"ayer comi anchoas"<<endl;
    file<<"y me sentaron muy mal"<<endl;
    file<<"fatal diria yo"<<endl;
    file<<"pero ya estoy bien tranquilo";                                              
    file.close();
    cout<<"ya esta. Fichero cerrado";
    return 0;
}
    
    

