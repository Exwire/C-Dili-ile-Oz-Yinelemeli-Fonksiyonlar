#include<stdio.h>

int print(int);
int main(){
	
	int N;
	puts("Lutfen N sayisini giriniz.");
	scanf("%d",&N);
	print(N);
	return 0;
}

int print(int a){
	
	if(a == 0)
		return 0;
	else
		return printf("%d\n",a) + print(a-1);
}
