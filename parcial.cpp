#include <stdio.h>
#include <stdlib.h>

void cargarMatriz(int matriz[4][4])
{
    int i,j,valor;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("\nIngrese el valor de la posicion %d y %d\n",i,j);
	        scanf("%d",&valor);
            matriz[i][j]=valor;
        }
    }
}
void sumarDiagonalPpal(int matriz[4][4])
{
    int i,sum=0;
    
    for(i=0;i<4;i++){
        sum=sum+matriz[i][i];
    }
    printf("La suma de la diagonal Principal es: %d\n", sum);
}
void cuantosPositivosNegativos(int matriz[4][4])
{
    int i,j,pos=0,neg=0;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if (matriz[i][j]>0){
                pos=pos+1;
            }else{
                neg=neg+1;
            }
        }
    }
    printf("La cantidad de numeros positivos es: %d\n", pos);
    printf("La cantidad de numeros negativos es: %d\n", neg);
}
void valorMaximo(int matriz[4][4])
{
    int i,j,max=-10;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if (matriz[i][j]>max){
                max=matriz[i][j];
            }
        }
    }
    printf("El valor maximo de la matriz es: %d\n", max);
    printf("\nEl valor maximo se encuentra en la posicion: \n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if (matriz[i][j]==max){
                printf("\n%d y %d\n",i,j);
            }
        }
    }
}

int main(){
	int matriz[4][4];
	int i,j;
    
    cargarMatriz(matriz);
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }
    sumarDiagonalPpal(matriz);
    cuantosPositivosNegativos(matriz);
    valorMaximo(matriz);

	system("pause");
	return 0;
}
