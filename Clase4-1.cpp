#include <stdio.h>
#include <stdlib.h>
int main(){
    int years;
    float dinero,acum,tasa;
    
    tasa=0.1;
    printf("Ingrese la cantidad de dinero a invertir:\n");
    scanf("%f",&dinero);
    
    printf("Ingrese la cantidad de anios:\n");
    scanf("%d",&years);       
    
    acum=dinero;
    
    for(int i=1;i<=years;i++){
        acum+=acum*tasa;
        printf("El monto acumulado al anio %d es: %.2f\n",i,acum);
    }
    
    system("pause");
    return 0;    
}
