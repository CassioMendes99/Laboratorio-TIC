#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
int main(){
	float tgph,vld;
	int dias;
	char nome[30];
 
 	for(int i=1;i<=30;i++){
	printf("Digite o nome: ");
	gets(nome);
	
	printf("\n Digite o numero de dias hospedado: ");
	scanf("%i", &dias);
	
	    if(dias<15){
		vld=(50.0*dias)+(4.0*dias);
		tgph+=vld;
		printf("O cliente %s deve  %.2f USD \n", nome,vld);
   }else if(dias==15){
   	    vld=(50.0*dias)+(3.60*dias);
   	   	tgph+=vld;
   	   	printf("O cliente %s deve  %.2f USD \n", nome, vld);
   }else if(dias>15){
   	    vld=(50.0*dias)+(3.0*dias);
   	   	tgph+=vld;
        printf("O cliente %s deve %.2f USD \n", nome, vld);
   }
		 if(i==30)
		    printf("Total ganho pelo hotel %.2f USD", tgph);  
  
}
    return 0;
}
