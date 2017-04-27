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
        }
	}
	if(j!=0){
	printf("\nIngrese un valor perteneciente al conjunto.\n");
	}
	return j;
}
int verificarChar(char val,char c[]){
   	int j=1;
       for(int i=0;i<sizeof(c);i++){
		if(c[i]==val){
            j= 0;
        }
	}
	if(j!=0){
	printf("\nIngrese un valor perteneciente al conjunto.\n");
	}
	return j;
}
int pedirElemento1(){
    int val1;
        printf("\nIngrese el valor del primer conjunto:\n");  
        scanf("%d",&val1);
        return val1;
}
char pedirElemento2(){  
    char val2;      
        printf("\nIngrese el valor del segundo conjuto:\n");
        fflush(stdin);
        scanf("%c",&val2);    
    return val2;
}
int buscarInt(int val,int c[]){
   	for(int i=0;i<sizeof(c);i++){
		if(c[i]==val){
            return i;
            break;
        }
	}
}
int buscarChar(char val,char c[]){
       for(int i=0;i<sizeof(c);i++){
		if(c[i]==val){
            return i;
            break;
        }
	}
}
int main(){
	int conjunto1[4]={1,2,3,8};
	char conjunto2[4]={'a','b','j','k'};
	int relacion[4][4]={{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};
	int val1,x,y,i,j,cont,cant;
    char val2;
	
	
	
	mostrarConjuntos(conjunto1,conjunto2);
	printf("\nCuantas relaciones desea ingresar?\n");
	scanf("%d",&cant);
	
	if(cant>16){
        cant=16;
    }
	
	for(cont=0;cont<cant;cont++){
        do{
            val1=pedirElemento1();
    	}while(verificarInt(val1,conjunto1)!=0);
    	do{
            val2=pedirElemento2();
        }while(verificarChar(val2,conjunto2)!=0);
    	
    	x=buscarInt(val1,conjunto1);
    	y=buscarChar(val2,conjunto2);
        relacion[x][y]=1;
    }
	for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%d ",relacion[i][j]);
        }
        printf("\n");
    }
	
	system("pause");
	return 0;
}
