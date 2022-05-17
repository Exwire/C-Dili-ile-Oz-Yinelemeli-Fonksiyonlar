#include<stdio.h>

int ebob(int,int);
int main(){
	
	int a,b;
	printf("Ebob alinacak sayilari giriniz.\nBirinci sayi = ");
	scanf("%d",&a);
	printf("Ikinci sayi = ");
	scanf("%d",&b);
	printf("Sayilarin ebobu = %d", ebob(a,b));
	return 0;
}

int ebob(int a, int b) {
    if (b == 0)
        return a;
    return ebob(b, a % b);
}
