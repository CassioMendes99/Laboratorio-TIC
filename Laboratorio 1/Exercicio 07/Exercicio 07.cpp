#include<stdio.h>
int main(){
	float pdf,pld,pdi,pdl,vdi,pfv;
	
	printf("Digite preco de fabrica: ");
	scanf("%f",&pdf);
	
	printf("Digite percentual de lucro do distribuidor: ");
	scanf("%f",&pld);
	
	printf("Digite percentul de imposto: ");
	scanf("%f",&pdi);
	
	pdl=(pdf*pld)/100;
	
	vdi=(pdf*pdi)/100;
	
	pfv=pdf+pdl+vdi;
	
	printf("O valor correspondente ao lucro do distribuidor e: %2.f \n",pdl);
	printf("O valor correspondente ao imposto e: %2.f \n",vdi);
	printf("O valor final do veiculo e: %2.f \n",pfv);
}
