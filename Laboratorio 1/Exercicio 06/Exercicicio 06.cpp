#include<stdio.h>
int main(){
	int cet,pdc,qc;
	
	printf("Digite custo do espetaculo: ");
	scanf("%i",&cet);
	
	printf("Digite preco do convite: ");
	scanf("%i",&pdc);
	
	qc=cet/pdc;
	 
	printf("Quantidade de convites necessarios serao: %i \n",qc);
	 
}
