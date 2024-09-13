#include<stdio.h>

void sirala(int dizi[],int boyut)
{
	int temp,i,j;
	for(i=0;i<boyut-1;i++)
	{
	
		for(j=0;j<boyut-1;j++)
		{
			if(dizi[j]>dizi[j+1])
			{
				temp = dizi[j];
				dizi[j] = dizi[j+1];
				dizi[j+1] = temp;
			}
		}
		yazdir(dizi,10);
	}
}

void yazdir(int c[],int boyut)
{
	int i;
	for(i=0;i<boyut;i++)
		printf("%d ",c[i]);
	printf("\n");
}

int main()
{
	int c[10]={9,8,7,6,5,4,3,2,1,0};
	int matris[3][3]={{0,1,2},{1,2,3},{2,3,4}};
	int i,j;
	
	int dizi[4][13];
	
	for(i=0;i<4;i++)
		for(j=0;j<13;j++)
			dizi[i][j]= i*13+j+1;
	for(i=0;i<4;i++)
	{
		
		for(j=0;j<13;j++)
			printf("%d ",dizi[i][j]);
		printf("\n");
	}
	
	for(i=0;i<3;i++)
	 {
		 for(j=0;j<3;j++)
		 {
		 	printf("%d ",matris[i][j]);
		 }
		 printf("\n");
	}
	/*
	int i;
	yazdir(c,10);
	sirala(c,10);
	yazdir(c,10);*/
}






