#include<stdio.h>

int basTop(int);
int main(){
	
	int a,b;
	printf("Bir sayi giriniz.\n");
	scanf("%d",&a);
	b = basTop(a);
	printf("Sayinin basamaklar toplami = %d",b);
	return 0;
}
int basTop(int sayi){
		
	if (sayi==0)
		return 0;
	else
		return sayi%10+basTop(sayi/10);
}
