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

void calcularDominio(int m[4][4],int c[]){
    int i,j,a,cont=0;
    int dom[4];
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(m[i][j]==1){
                dom[cont]=c[i];
                cont++;
            }
        }
    }
    printf("\nEl dominio es ");
    for(int a = 0; a < cont; a++) printf(" %d", dom[a]);
}
void calcularImagen(int m[4][4],char c[]){
    int i,j,a,cont=0,l,encontro;
    char dom[4];
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(m[i][j]==1){
                encontro=0;
                for(l=0;l<=cont;l++){
                    if(dom[l]==c[j]){
                        encontro=1;
                    }
                }
                if(encontro==0){
                    dom[cont]=c[j];
                        cont++;
                }
            }
        }
    }
    printf("\nLa imagen es ");
    for(int a = 0; a < cont; a++) printf(" %c", dom[a]);
}
int determinarRango(int m[4][4]){
    int i,j,a,cont=0;
    char dom[4];
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(m[i][j]==1){
                cont++;
            }
        }
    }
    printf("\nEl rango es %d\n",cont);
}
void esReflexiva(int m[4][4]){
    int i,cont=0;
    for(i=0;i<4;i++){
            if(m[i][i]==1){
                cont++;
            }
    }
    if(cont==4){
        printf("Es reflexiva!!\n");
        }else{
        printf("No es reflexiva!!\n");
        }
    
}
int esAntisimetrica(int m[4][4]){
    int i,j,cont=1;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(((m[i][j]+m[j][i])==2)&&(j!=i)){
                cont=0;
            }
        }
    }
    if(cont!=0){
        printf("Es antisimetrica!!\n");
        }else{
        printf("No es antisimetrica!!\n");
        }    
}
int esTransitiva(int m[4][4]){
    int i,j,l,transitiva=1;
    
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(m[i][j]==1){
                for(l=0;l<4;l++){
                    if(m[j][l]==1){
                        if(m[i][l]!=1){
                            transitiva=0;
                        }
                    }else{
                        transitiva=1;
                    }     
            }
            transitiva=0;
        }
    }
    }
    if(transitiva==1){
        printf("Es transitiva!!\n");
        }else{
        printf("No es transitiva!!\n");
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
    calcularDominio(relacion,conjunto1);
	calcularImagen(relacion,conjunto2);
	determinarRango(relacion);
	esReflexiva(relacion);
	esAntisimetrica(relacion);
	esTransitiva(relacion);
	system("pause");
	return 0;
}
