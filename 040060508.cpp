// AMMAR YAS�R KORKUSUZ - 040060508 - CRN : 13780

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int fonk(int number1, int number2){
int k,i;
srand(time(NULL));

for(i=1;i<=100;i++)
{                
printf("%d \t",number1+1+(rand()%(number2-number1)));
//se�ilen iki say� da dahil olmayacak bi�imde, aralar�ndaki say�lardan rasgele say�lar se�iyor

if(i%10==0)          
printf("\n"); //10. terimden sonra alt sat�ra ge�iyor
}
return k;
}

int main() // main fonksiyonuna giriyor
{
    int a, b; // iki integer tan�ml�yor
    
    while(1){
        printf("enter N1:");
        scanf("%d", &a);         //verilen ilk integer� N1 e e�itliyor
        printf("enter N2:");     
        scanf("%d", &b);         //verilen ikinci integer� N2 ye e�itliyor
        
        if (a == 0 || b == 0) // N1 veya N2 "0" a e�itse d�ng�den ��k�yor
        {
           printf("\nN1 and N2 can't be zero, loop terminated");    
           break;
        }  
        else if(a < 0 || a > b )  // N1 negatifse yada N2 den b�y�kse yeni de�erler istiyor
        {
           printf("\nN1 can't be negative or bigger than N2 enter new values \n"); 
           continue;
        }
            
        else  // bu ko�ullarda de�ilse random fonksiyonuna giriyor
           fonk(a, b); 
    }
    
    scanf("%d", &a);
    return 0;    
}


