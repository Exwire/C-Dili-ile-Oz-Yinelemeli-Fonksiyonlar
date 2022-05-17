#include<stdio.h>

int enBuyuk(int a[10]);
int main(){
	
	int dizi[10]={1,2,15,25,15,26,34,26,19,94};
	int a;
	a = enBuyuk(dizi);
	printf("%d",a);
	return 0;
}

int enBuyuk(int a[10]){
	
	int max = 0;
	const int i=0;
	if(max<a[i])
		max = a[i];
	
	if (i==9)
		return 0;
	
		i++;
		return enBuyuk(a[i]);
		
}
