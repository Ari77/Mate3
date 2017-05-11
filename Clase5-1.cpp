#include<stdlib.h>
#include<stdio.h>
#include<time.h>

void cantidadDeAristas(int valor, int matriz[100][100]){
    int i,j,acum=0;
    for(i=0;i<valor;i++){
        for(j=0;j<valor;j++){
            if (matriz[i][j]==1){
                acum+=1;
            }
        }
    }
    printf("\nEl numero de Aristas es: %d\n",acum);

}
void cantidadDeLazos(int valor, int matriz[100][100]){
    int i,j,acum=0;
    for(i=0;i<valor;i++){
        if (matriz[i][i]==1){
            acum+=1;
        }
    }
    printf("\nEl numero de Lazos es: %d\n",acum);

}
/*
void cantidadDeGrado(int valor, int matriz[100][100]){
    int i,j,acum=0;
    for(i=0;i<valor;i++){
        for(j=0;j<valor;j++){
            acum+=1;
            
            if (matriz[i][j]==1){
                acum+=1;
            }
        }
    }
    printf("\nEl numero de Aristas es: %d\n",acum);

}

FALTA VER LO DEL GRADO
*/

int main(){
	int matriz[100][100];
	int i,j,ene;

	printf("\nIngrese la cantidad de NxN que tiene la matriz?\n");
	scanf("%d",&ene);
	
	 for(i=0;i<ene;i++){
        for(j=0;j<=i;j++){
            matriz[i][j]=int(rand()%2);
            matriz[j][i]=matriz[i][j];
        }
    }
    for(i=0;i<ene;i++){
        for(j=0;j<ene;j++){
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }
    cantidadDeAristas(ene,matriz);
    cantidadDeLazos(ene,matriz);
	system("pause");
	return 0;
}
