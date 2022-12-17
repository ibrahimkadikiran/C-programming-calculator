#include <stdio.h>

void main(){
	int dongu =1;
	while(dongu <=4){
		
		int sayi1, sayi2, hesap; 
		char islem;
		
		printf("\n1. Sayiyi Giriniz: "); scanf("%i", &sayi1);
		printf("\nYapilacak islemi seciniz:| + | - | * | / | : "); scanf(" %c", &islem);
		printf("\n2. Sayiyi Giriniz: "); scanf("%i", &sayi2);
		
		
		if(islem =='+'){
			hesap = sayi1+sayi2;
			printf("\niki sayinin toplami: %i\nDevam etmek icin bir sayiya bas ve Enter'la': ",hesap); scanf("%i", &hesap);	
		}
		else if(islem =='-'){
			hesap = sayi1-sayi2;
			printf("\niki sayinin farki: %i\nDevam etmek icin bir sayiya bas ve Enter'la': ",hesap); scanf("%i", &hesap);
			
		}
		
		else if(islem =='*'){
			hesap = sayi1 * sayi2;
			printf("\niki sayinin carpimi: %i\nDevam etmek icin bir sayiya bas ve Enter'la': ",hesap);scanf("%i", &hesap);
			
		}
		else if(islem =='/'){
			hesap = sayi1 / sayi2;
			printf("\niki sayinin bolumu: %i\nDevam etmek icin bir sayiya bas ve Enter'la': ",hesap);scanf("%i", &hesap);
			
		}
		else{
			printf("Gercersiz karakter !!!");
			break;
		}

	}
	
	return 0;
}


