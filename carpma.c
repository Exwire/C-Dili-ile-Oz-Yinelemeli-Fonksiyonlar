#include<stdio.h>

int carp(int);
int main(){
	
	int N;
	puts("1 den N sayisina kadar olan sayilarin carpimi bulunacaktir.\nLutfen N sayisini giriniz.");
	scanf("%d",&N);
	printf("Girilen N sayisina kadar olan sayilarin carpými = %d",carp(N));
	return 0;
}

int carp(int a){
	
	if(a == 0)
		return 1;
	else
		return a*carp(a-1);
}
