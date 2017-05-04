#include <stdio.h>
#include <stdlib.h>
#define N 3

void inicializar(int n, int vec[]){
    for(int i=0;i<n;i++){
        vec[i]=0;
        }
}

int esPrimo(int num1){
    int i,a;
    a=0; 
    for(i=1;i<=num1;i++){
        if(num1%i==0) 
        a++;
    }
    if(a==2){
        return 1;
    }else{
        return 0;
    }
}
void numerosPrimos(int cant,int vec[]){
    int cont=0;
    for(int i=0;i<(cant*cant);i++){
        if(esPrimo(i)==1){
            vec[cont]=i;
            cont++;
        }
        if(cont>cant){
            break;
        }
    }
}
void secFibonacci(int valor,int vec[]){
    vec[0]=1;
    vec[1]=1;
    for(int i=2;i<valor;i++){
        vec[i]=vec[i-1]+vec[i-2];
    }   
}

void intercalar(int vec1[],int vec2[],int cant){
    int i=0,j=0,z;
    
    printf("La sucesion mezclada es:\n");
    
    for(z=1;z<(cant*2);z++){
//        printf("\nAl principio del for j es %d e i es %d.\n",j,i);
        
        if(vec1[i]<vec2[j] && i<cant){
            printf("%d ",vec1[i]);
            i++;
        }else if(vec1[i]>vec2[j] && j<cant){
            printf("%d ",vec2[j]);
            j++;
        }else{
            printf("%d ",vec2[j]);
            printf("%d ",vec1[i]);
            j++;
            i++;
        }
        if(i>=cant) {
            for(j;j<cant;j++){
                printf("%d ",vec2[j]);
            }
            break;
        }
        if(j>=cant) {
            for(i;i<cant;i++){
                printf("%d ",vec1[i]);
            }
            break;
        }
//        printf("\nAl cierre del for j es %d e i es %d.\n",j,i);
    }
}

int main(){
    int primos[N];
    int fibonacci[N];
    int i;
    inicializar(N,primos);
    inicializar(N,fibonacci);    
    
    numerosPrimos(N,primos);
    secFibonacci(N,fibonacci);
    
    printf("Los primos son:\n");
    for(i=0;i<N;i++){
        printf("%d ",primos[i]);
        }
    printf("\nFibonacci es:\n");
    for(i=0;i<N;i++){
        printf("%d ",fibonacci[i]);
        }
    printf("\n");
    
    intercalar(primos,fibonacci,N);
    
    
    system("pause");    
    return 0;
    
}
