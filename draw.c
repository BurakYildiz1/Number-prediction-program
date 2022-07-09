#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
	
	//kullanici bilgilerini al
	//sansli cekilis uygulamasý
	//kullanici bilgilerini cek
	
	char isim[10],soyad[10];
	int secim;
	int sayi;
	printf("isim girin=");
	scanf("%s",&isim);
	printf("\nsoyisim giriniz girin=");
	scanf("%s",&soyad);
	printf("\ndevam etmek icin secim yapiniz\n[1]sansli cekilisi dene\n[2]kullanici bilgilerini goruntule");
	printf("\nsecim yapin:");
	scanf("%d",&secim);
	
	if (secim==1){
		printf("\nsansli cekilis uygulamasindasiniz \n1 ile 5 arasinda secim yapiniz =");
		scanf("%d",&sayi);
		srand(time(NULL));
		int random=1+rand()%5;
		
		if(sayi==random){
			printf("\ngirilen sayi: %d\ncekilisteki sayi: %d",sayi,random);
			printf("\nkazandiniz");
		}
		else{
			printf("\ngirilen sayi: %d\ncekilisteki sayi: %d",sayi,random);
			printf("\nbir dahaki sefere");
		}
	}
	else if(secim==2){
		printf("\nadiniz =%s",isim);
		printf("\nsoyadiniz =%s",soyad);
	}
	return 0;
}

