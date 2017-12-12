#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream file("MiPequeñoPoni.txt");
    file<<"Cara al sol con la camisa nueva que tu bordaste en rojo ayer"<<endl;
    file<<"me hallara la muerte si me lleva y no te vuelvo a ver"<<endl;
    file<<"formare junto a mis compañeros, que hacen guardia junto a los luceros"<<endl;
    file<<"impasibles formaran y estan presentes en nuestro afan";                                              
    file.close();
    cout<<"ya esta. Fichero cerrado";
    return 0;
}
    
    

