#include<stdio.h>
int main(){
	int AnoActual,AnoNascimento,Idade,IdadeFutura;
	
	printf("Digite o ano de nascimento e o ano actual:");
	scanf("%i%i",&AnoNascimento,&AnoActual);
	
	Idade=AnoActual-AnoNascimento;
	
	IdadeFutura=2050-AnoNascimento;
	
	printf("Idade actual e: %i \n",Idade);
	printf("Idade em 2050 e: %i ",IdadeFutura);
}
   
