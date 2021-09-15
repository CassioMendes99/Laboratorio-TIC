#include<stdio.h>
int main(){
	int num,p,s,t,q,qi;
	
	printf("Digite um numero com 5 digitos: ");
	scanf("%i",&num);
	
	p=(num/10000)%10;
	s=(num/1000)%10;
	t=(num/100)%10;
	q=(num/10)%10;
	qi=(num/1)%10;
	
	if(p==qi && s==q){
		printf("Numero e um palindromo");
	} else{
		printf("Numero nao e um palindromo");
	}
	
}
