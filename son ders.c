#include<stdio.h>
#include<math.h>
#include<time.h>
/*
float us_alma(float a, int b)
{
	float sonuc=1; 
	int i;
	int isaret; 
	//if(b==0) return 1.0; 
	for(i=0;i<abs(b);i++)
		sonuc = sonuc * a; 
	if(b>0)
	return sonuc;
	else 
	return 1.0/sonuc;  
}

// 
// pow(a,b) -> pow(a,b-1) * a
//          -> 1             b=0

float power(float a,int b)
{
	if(b==0) return 1; 
	return power(a,b-1)*a;
}
float ort_hesap(int dizi[],int boyut)
{
	float toplam;
	int i; 
	for(i=0;i<boyut;i++)
		toplam += dizi[i];
		
	return toplam/boyut; 
}

int main()
{
	int dizi[100];
	int i;
	for(i=0;i<100;i++)
		dizi[i]=i+1; 
	for(i=0;i<100;i++)
		printf("%d \n",dizi[i]);
	printf("%f",ort_hesap(dizi,100));
}
*/
void shuffle_deck(int dizi[4][13])
{	
	int i,j;
	int rast,temp; 
	for(i=0;i<4;i++)
		for(j=0;j<13;j++)
		{
			rast = rand()%52;
			temp = dizi[i][j];
			dizi[i][j] = dizi[rast/13][rast%13];
			dizi[rast/13][rast%13] = temp;
		}
}
int main()
{
	srand(time(NULL));
	int dizi[4][13]; 
	int i,j;
	for(i=0;i<4;i++)
		for(j=0;j<13;j++)
			dizi[i][j]= i*13+j+1; 
	for(i=0;i<4;i++)
	{
	
		for(j=0;j<13;j++)
			printf("%d ",dizi[i][j]);
	printf("\n");
	}
	
	shuffle_deck(dizi);
	printf("\n");
	for(i=0;i<4;i++)
	{
	
		for(j=0;j<13;j++)
			printf("%d ",dizi[i][j]);
	printf("\n");
	}
}

