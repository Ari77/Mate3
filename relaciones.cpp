#include<stdlib.h>
#include<stdio.h>
void mostrarConjuntos(int c1[],char c2[]){
	int sizeArray;
//	printf("\nEl size of int %d",sizeof(int));
	sizeArray=sizeof(c1);

	printf("El conjunto 1 es:\n");
//		printf("%d\n",sizeArray);
	for(int i=0;i<sizeArray;i++){
		printf("%d, ",c1[i]);
	}
//	printf("\nEl size of char %d",sizeof(char));
	sizeArray=sizeof(c2);
	printf("\nEl conjunto 2 es:\n");
//		printf("%d\n",sizeArray);
	for(int i=0;i<sizeArray;i++){
		printf("%c, ",c2[i]);
	}
}
int verificarInt(int val,int c[]){
    int j=1;
       
   	for(int i=0;i<sizeof(c);i++){
		if(c[i]==val){
            j=0;
            break;
        }
	}
	if(!j){
	printf("Ingrese un valor perteneciente al conjunto.\n");
	}
	return j;
}
int verificarChar(char val,char c[]){
   	int j=1;
       for(int i=0;i<sizeof(c);i++){
		if(c[i]==val){
            j= 0;
            break;
        }
	}
	if(!j){
	printf("Ingrese un valor perteneciente al conjunto.\n");
	}
	return j;
}
void pedirElemento1(int *val1){
        printf("Ingrese el valor del primer conjunto:\n");  
        scanf("%d",*val1);
}
void pedirElemento2(char *val2){        
        printf("Ingrese el valor del segundo conjuto:\n");
        fflush(stdin);
        scanf("%c",*val2);    
}
int main(){
	int conjunto1[4]={1,2,3,8};
	char conjunto2[4]={'a','b','j','k'};
	int relacion[4][4];
	int val1;
    char val2;
	
	mostrarConjuntos(conjunto1,conjunto2);
	
    do{
        pedirElemento1(&val1);
	}while(verificarInt(val1,conjunto1));
	do{
        pedirElemento2(&val2);
    }while(verificarChar(val2,conjunto2));
	

	
	system("pause");
	return 0;
}
