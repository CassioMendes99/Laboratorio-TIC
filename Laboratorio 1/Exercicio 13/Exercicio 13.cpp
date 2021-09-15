#include<stdio.h>
int main(){
	int i,m,soma=0;
	
	for(i=1;i<500;i++){
		if(i%2!=0){
			m=i*3;
			soma+=m;
		}
	}
	printf("Soma e: %i",soma);
}
	
