#include <stdio.h>

int main (){
	
	float alas=8.0;
	float tinggi=5.0;
	float luas;
	
	printf("diketahui panjang alas segitiga 8 CM \n");
	printf("dan tinggi segitiga 5 CM\n");
	printf("maka, luas segitiga tersebut adalah?.\n");
	
	luas=0.5*alas*tinggi;
	
	printf("1/2 . alas . tinggi = %2.fcm^2", luas);
	
	return 0;
	
}
