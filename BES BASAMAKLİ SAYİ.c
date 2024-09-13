#include<stdio.h>

int main()
{
	int a,b=0; 
	printf("5 basamakli bir sayi giriniz:");
	scanf("%d",&a);
	// 12345
	b += a%10; // 5
	a=a/10; // 1234
	b=b*10; // 50
	b += a%10; // 54
	a=a/10; // 123
	b=b*10; // 540
	b += a%10; // 543
	a=a/10; // 12
	b=b*10; // 5430
	b += a%10; //5432
	a=a/10; // 1
	b=b*10; //54320
	b += a%10; //54321
	printf("%d",b);
	
}