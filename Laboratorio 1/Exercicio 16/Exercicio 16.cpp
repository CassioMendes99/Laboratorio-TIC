#include<stdio.h>
int main(){
	float i,altura,menor,maior=0,n;
	
	for(i=1;i<=4;i++){
	printf("Digite as alturas: ");
	scanf("%i",&altura);

         if(i==1)
         menor=altura;     
	     if(altura<menor)
	     menor=altura;
		 if(altura>maior)
		 maior=altura;
	
}
	printf("Menor altura e: %.2f\n",menor);
    printf("Maior altura e: %.2f",maior);


}

