#include<stdio.h>
int main(){
	int slaminimo,sla,qt;
	
	printf("Digite salario minimo: \n");
	scanf("%i",&slaminimo);
	
	printf("Digite salario: ");
	scanf("%i",&sla);
	
	qt=sla/slaminimo;
	
	printf("Quantida de salarios minimo sao: %i",qt);
}
	
