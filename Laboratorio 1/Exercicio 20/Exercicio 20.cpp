#include<stdio.h>
int main(){
	int cont;
	float altc=1.50,altj=1.10,convc=0,convj=0;
	
	convc=altc*100;
	convj=altj*100;

	while(convc>=convj){
		convc+=2;
		convj+=3;
		cont++;
	}
	printf("Serao necessarios %i anos para o Juaca ser mais alto do que o Chico",cont);
	
}
