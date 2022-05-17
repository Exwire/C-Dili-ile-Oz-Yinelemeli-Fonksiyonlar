#include<stdio.h>

int yolBulmaSatir(int dizi[6][12]);
int yolBulmaSutun(int dizi[6][12]);
int main(){
	
	int i,j;
	int dizi[6][12]={{1,0,0,0,0,0,0,0,0,0,0,0},
					 {1,0,0,0,0,0,0,0,0,0,0,0},
					 {1,1,1,1,1,1,0,0,0,0,0,0},
					 {0,0,0,0,0,1,0,0,0,0,0,0},
					 {0,0,0,0,0,1,0,0,0,0,0,0},
					 {0,0,0,0,0,1,1,1,1,1,1,1}};
	puts("Kullanilan dizi\n-------------------------------------------------------------\n");
	for(i=0;i<6;i++)
	{
		for(j=0;j<12;j++)
		{
			printf("%d  ",dizi[i][j]);
		}
		printf("\n");
	} 
	puts("\n\n\nSon konum\n-------------------------------------------------------------");
	printf("\nSatir=%d\nSutun=%d",yolBulmaSatir(dizi),yolBulmaSutun(dizi));
	return 0;

}
int yolBulmaSatir(int dizi[6][12]){
	
	static int i=0,j=0;
	
	if(dizi[i][j+1]==1)
	{
		j++;
		return yolBulmaSatir(dizi);
	}
	else if(dizi[i+1][j]==1)
	{
		i++;
		return yolBulmaSatir(dizi);
	}
	else
		return i;
}
int yolBulmaSutun(int dizi[6][12]){
	
	static int a=0,b=0;
	
	if(dizi[a][b+1]==1)
	{
		b++;
		return yolBulmaSutun(dizi);
	}
	else if(dizi[a+1][b]==1)
	{
		a++;
		return yolBulmaSutun(dizi);
	}
	else
		return b;
}
