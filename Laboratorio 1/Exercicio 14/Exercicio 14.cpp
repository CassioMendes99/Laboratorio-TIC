#include<stdio.h>
int main(){
	int i,sp=0,si=0,qtp=0,qti=0,num;
	float mp,mi;
	
	for(i=0;i<10;i++){
		printf("Digite os numeros: ");
		scanf("%i",&num);

	  if(num%2==0){
		sp+=num;
		qtp+=1;
	} 
	   else if(num%2!=0){
		si+=num;
		qti+=1;
	}
}
	
	mp=sp/qtp;
	mi=si/qti;
	printf("Media dos pares e: %.2f \n",mp);
	printf("Media dos impares e: %.2f",mi);

}
