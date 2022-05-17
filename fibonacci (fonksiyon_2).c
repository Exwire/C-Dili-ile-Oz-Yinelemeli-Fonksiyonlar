#include <stdio.h>

int fibo(int);

int main(){
	
	int terim;
	
	printf("Kacinci terimi istiyorsunuz.\n");
	scanf("%d",&terim);
	
	printf("%d",fibo(terim-1));
	
	return 0;
}

int fibo(int x){
	
	if(x==1 || x==0){
		return 1;
	}
	return fibo(x-1)+fibo(x-2);
}
