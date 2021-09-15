#include<stdio.h>
int main(){
	int num,fact=1,cont;
	
	printf("Digite um numero: ");
	scanf("%i",&num);
	
	for(cont=1;cont<=num;cont++){
		fact=fact*cont;
		if(cont<num){
			printf("%i x ",cont);
			}else if(cont==num){
				printf("%i ",cont);
			}
			
		}
	printf("= %i",fact);
}
