#include<stdio.h>
int main(){
	float sal,aumento,novosal,perc;
	
	printf("Digite salario: ");
	scanf("%f",&sal);
	
	printf("Digite percentual: ");
	scanf("%f",&perc);
	
	aumento=(sal*perc)/100;
	
	printf("Aumento e: %2.f \n",aumento);
	
	novosal=sal+aumento;
	
	printf("Novo salario e: %2.f ",novosal);
}
	
