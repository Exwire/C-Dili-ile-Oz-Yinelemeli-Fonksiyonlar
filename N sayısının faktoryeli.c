#include<stdio.h>

int fact(int);
int main(){
	
	int N;
	puts("Lutfen faktoryelini istediginiz N sayisini giriniz.");
	scanf("%d",&N);
	printf("N! = %d",fact(N));
	return 0;
}

int fact(int a){
	
	if(a == 0 || a == 1)
		return 1;
	else
		return a*fact(a-1);
}
