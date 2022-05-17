#include<stdio.h>

int pow(int,int);
int main(){
	
	int a,b;
	printf("Hangi a sayisinin kacýncý(b) katini almak istiyorsunuz.\na = ");
	scanf("%d",&a);
	printf("b = ");
	scanf("%d",&b);
	printf("a ussu b = %d",pow(a,b));
	return 0;
}

int pow(int a,int b){
	
	if (b==1)
		return a;
	else
		return a*pow(a,b-1);
}
