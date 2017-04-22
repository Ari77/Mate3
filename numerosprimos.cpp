#include <stdio.h>
#include <stdlib.h>
int existe(int matriz[6][10],int valor){
    int j,i;
    int respuesta=0;
    for(j=0;j<6;j++){
        for(i=0;i<10;i++){
            if(matriz[j][i]==valor){
                respuesta=1;
                }
        }
    }
    return respuesta;
}
void cambiarValor(int matriz[6][10],int valor){
    int j,i;
    for(j=0;j<6;j++){
        for(i=0;i<10;i++){
            if(matriz[j][i]==valor){
                matriz[j][i]=0;
                }
        }
    }
}
void limpiarMatriz(int matriz[6][10]){
    int aux;
    int numInicial;
    numInicial=2;
    do{
        aux=(numInicial*numInicial);
        do{
            cambiarValor(matriz,aux);
            aux+=numInicial;
        }while(aux<60);
        numInicial++;
    }while(existe(matriz,aux));
}

int main(){
    int matriz[6][10];
    int i,j,contador;
    contador=1;
    for(j=0;j<6;j++){
        for(i=0;i<10;i++){
            matriz[j][i]=contador;
            contador++;
        }
    }
    for(j=0;j<6;j++){
        for(i=0;i<10;i++){
            printf("%d ",matriz[j][i]);
        }
        printf("\n");
    }
    limpiarMatriz(matriz);
    for(j=0;j<6;j++){
        for(i=0;i<10;i++){
            if(matriz[j][i]!=0){
            printf("%d ",matriz[j][i]);
            }
        }
        printf("\n");
    }
    
    system("pause");
    return 0;    
}
