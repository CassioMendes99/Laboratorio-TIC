#include<stdio.h>
int main(){
	float salminimo,qtkc,vcq,vasp,desconto;
	
	printf("Digite salario minimo: ");
	scanf("%f",&salminimo);
	
	printf("Digite quantidade de quilowatts consumida: ");
	scanf("%f",&qtkc);
	
	vcq=salminimo/5;
	
	vasp=qtkc*vcq;
	
	desconto=vasp*0.85;
	
	printf("Valor de cada quilowatt e: %f \n",vcq);
	
	printf("Valor a ser pago pela residencia: %f \n",vasp);
	
	printf("Valor a ser pago com desconto: %f",desconto);
	
}
