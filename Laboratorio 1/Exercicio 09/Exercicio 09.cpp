#include<stdio.h>
int main(){
	float psr,qrf,resto;
	
	printf("Digite peso da raçao em kilos: ");
	scanf("%f",&psr);
	
	printf("Digite quantidade de racao fornecida em gramas: ");
	scanf("%f",&qrf);
	
	psr=psr*1000;
	
	qrf=qrf*2;
	
	qrf=qrf*5;
	
	resto=psr-qrf;
	
	resto=resto/1000;
	
	printf("No saco restara: %fkg",resto);
}
