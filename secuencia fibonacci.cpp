#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,valor;
    int fibo[1000];
    
    fibo[0]=1;
    fibo[1]=1;
    
    printf("Ingrese hasta que valor de la sucesion desea ver:\n");
    scanf("%d",&valor);
    for(i=2;i<valor;i++){
        fibo[i]=fibo[i-1]+fibo[i-2];
    }   
    printf("La sucesion de fibonacci es:\n");
    for(i=0;i<valor;i++){
        if(i!=(valor-1)){
            printf("%d,",fibo[i]);
        }else{
            printf("%d\n",fibo[i]);
        }
    }
    system("pause");
    return 0;
}

