#include<stdio.h>

int fonk(int a[],int n);
int main(){
	
	int n=5,dizi[]={1,15,7,8,9};
	printf("Dizi %d tane tek sayiya sahiptir.",fonk(dizi,n));
	return 0;
}
int fonk(int a[],int n){
	
	if(n==-1)
		return 0;
	else if(a[n-1]%2==1)
		return 1+fonk(a,n-1);
	else
		return fonk(a,n-1);
}
