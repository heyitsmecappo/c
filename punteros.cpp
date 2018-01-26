//Programas sobre manejo de memoria
#include<stdio.h>
int main(){
    char palabra1[5];
    char palabra2[5];
    int salir;
    printf("Dime algo: ");
    scanf("%s",palabra1);
    //%s para guardar una cadena
    //%x para numeros hexadecimales
    printf("\nDime algo mas: ");
    scanf("%s",palabra2);
    printf("direccion palabra1 = %x",palabra1);
    printf("palabra1 = %c\n",*(palabra1+6));
    printf("direccion palabra2 = %x",palabra2);
    printf("palabra2 = %c  ",*(palabra2+7));
    scanf("%i",&salir);
}   
