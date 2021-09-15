#include<stdio.h>
int main(){
	int nht,salminimo,vht,salb,imp,salreceber;
	
	printf("Digite numero de horas trabalhadas: ");
	scanf("%i",&nht);
	
	printf("Digite o salario minimo");
	scanf("%i",&salminimo);
	
	vht=salminimo/2;
	
	salb=nht*vht;
	
	imp=(salb*3)/100;
	
	salreceber=salb-imp;
	
	printf("Salario a receber e: %i",salreceber);
	
}
