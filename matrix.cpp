#include<iostream>
using namespace std;
int main(){
    int matriz[3][3];
    int fila,col;
    int salir;
    for(fila=0;fila<3;fila++){
                              for(col=0;col<3;col++){
                                                     cout<<"matriz["<<fila<<"]["<<col<<"]";
                                                     cin>>matriz[fila][col];
                              }
    }
    cout<<endl<<"hemos acabado";
    cout<<endl<<"1:pulse cualquier letra";
    cout<<endl<<"2:pulse enter para salir";
    cin>>salir;
    return 0;
}
