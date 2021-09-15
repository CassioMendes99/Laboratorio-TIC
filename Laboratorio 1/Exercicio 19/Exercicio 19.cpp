#include<stdio.h>
int main(){
	int q,fib,n1=0,n2=1,i;
	
	 for(i=1;i<=20;i++){
	 	
	 	printf("%i ",n1);
	 	fib=n1+n2; 
	 	n1=n2;
	 	n2=fib;
	 }
}
