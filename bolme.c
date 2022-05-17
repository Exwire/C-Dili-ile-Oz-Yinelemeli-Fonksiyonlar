#include<stdio.h>

int bolme(int,int);
int main(){
	
	int a,b;
	printf("Hangi a sayisini b sayisina bolmek istiyorsunuz.\na = ");
	scanf("%d",&a);
	printf("b = ");
	scanf("%d",&b);
	printf("a/b = %d",bolme(a,b));
	return 0;
}

int bolme(int a,int b){
	
	if(a<0)
		return -1;
	else
		return 1+bolme(a-b,b);
}
