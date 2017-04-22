#include <stdio.h>
#include <stdlib.h>

int factorial(int n){
    if(n==0){
        return 1;
    }else{
        return n*factorial(n-1);
    }
}

int main(){
    int valor;
    
    printf("Ingrese el valor del factorial que desea ver:\n");
    scanf("%d",&valor);
    
    printf("\nEl factorial es: %d.\n",factorial(valor));
    system("pause");
    return 0;
}
