#include<stdio.h>
int main(){
	int suc,num;
	do
	{
		printf("Digite os numeros: ");
		scanf("%i",&num);
		if(num>0){
			suc=num+1;
        printf("O sucessor e: %i \n",suc);
		}
	}while(num>0);
	    
}
