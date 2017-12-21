using namespace std;
#include<iostream>
int main(){
    int pepito[5];
    int cont;
    int salir;
    int suma=0;
    for(cont=0;cont<5;cont++){
        cout<<"dime un numero: ";
        cin>>pepito[cont];
    }
    cout<<"la suma vale: "<<endl;
    for(cont=0;cont<5;cont++){
      suma=suma+pepito[cont];
    }
    cout<<suma;
    cout<<"toca cualquier tecla:";
    cin>>salir;
    return 0;
}
