#include<stdio.h>

int sum(int);
int main(){
	
	int N;
	puts("1 den N sayisina kadar olan sayilarin toplami bulunacaktir.\nLutfen N sayisini giriniz.");
	scanf("%d",&N);
	printf("Girilen N sayisina kadar olan sayilarin toplami = %d",sum(N));
	return 0;
}

int sum(int a){
	
	if(a == 0)
		return 0;
	else
		return a+sum(a-1);
}
