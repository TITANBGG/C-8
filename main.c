#include <stdio.h>
#include <stdlib.h>

int main() {
	/*
	int a=1;
	float b=2.3;
	double c=4.5;
	char ch='a';
	 
	printf("Merhaba Dunya! %d %f %lf %c",a,b,c,ch);
	
	c=(a+b)*(c*a); 
	b=a*c; 
	b=--c + --a; 
	// == != < > <= >= && ||
	if(a>=c || b<c)
	{
		printf("Merhaba Dunya! %d %f %lf %c",a,b,c,ch);
		printf("another print");
	}
	else if(c>b) 
		printf("deneme");
	else 
		printf("hicbir kosula uymadi!");
		*/
		/*
	int i,toplam=0,num; 
	do
	{
			scanf("%d",&num);
			if(num==0) break;
			if(num<0) continue;
			toplam += num; 
	i++;
	}while(num!=0);
	printf("%f",(float)toplam/i);

		*/
		/*
	int i,j;
	int x,y,t; 
	scanf("%d %d",&x,&y);
	if(x>y) {
			t=x;
			x=y;
			y=t; 
			}
	for(i=x;i<=y;i++)
	{
		for(j=x;j<=y;j++)
			printf("%2d*%2d=%2d ",i,j,i*j);
		printf("\n");
	}
		
	*/
	int n,i,j,toplam; 
	scanf("%d",&n);
	for(j=2;j<=n;j++)
	{
	toplam=0;
	if(n==0) break;
	for(i=1;i<j;i++)
		if(j%i==0)
			toplam+=i;
	if(toplam==j) printf("%d ",j);
	}
	return 0;
}