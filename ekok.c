#include<stdio.h>

int ekok(int,int);
int main(){
	
	int a,b;
	printf("Ekok alinacak sayilari giriniz.\nBirinci sayi = ");
	scanf("%d",&a);
	printf("Ikinci sayi = ");
	scanf("%d",&b);
	if(a>b)
		printf("Sayilarin ekoku = %d", ekok(a,b));
	else
		printf("Sayilarin ekoku = %d", ekok(b,a));
	return 0;
}

int ekok(int a, int b) {
    if (a%b == 0)
        return a;
    return ekok(2*a,b);
}
