#include <stdio.h>
#include<stdlib.h>
#include<time.h>


int main()

{

int sayi=0,tahmin=0;


srand(time(NULL));

 

sayi=rand()%100+1;

 

printf("tahmin ettigim sayiyi bil bakalim?\n");

scanf("%d\n", &tahmin);


while(tahmin!=sayi)

{

if(tahmin<sayi)

{
printf("daha buyuk sayi tahmin etmelisinn\n");
scanf("%d", &tahmin);

}

if(tahmin>sayi)

{

printf("daha kucuk sayi tahmin etmelisinn\n");

scanf("%d", &tahmin);

}

if(tahmin==sayi)

{

printf("\ntebrikler");

}

}

return 0;
}
