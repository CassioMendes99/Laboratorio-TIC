#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c,delta,rd;
	float x1,x2;
	
	printf("Digite valor de a: ");
	scanf("%i",&a);
	
	printf("Digite valor de b: ");
	scanf("%i",&b);
	
	printf("Digite valor de c: ");
	scanf("%i",&c);
	
	if(a!=0){
		
	delta=(b*b-4*a*c);
	
	if(delta<0){
		printf("Nao te solucao");
	}
	else{
		rd=sqrt(delta);
		printf("Resultado: %i \n",rd);
		}
		
		x1=(-b+rd)/2*a;
		x2=(-b-rd)/2*a;
		
		printf("X1 e: %2.f \n",x1);
		printf("X2 e: %2.f",x2);	
	
	}
	
	
}
