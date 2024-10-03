#include <stdio.h>
#include <cmath>

int main (){
	
	float A= 4.0;
	float B= 5.0;
	float c = sqrt (A*A + B*B);
	
	printf("diketahui sebuah segitiga siku-siku dengan panjang sisi alas 4 cm dan sisi tinggi 5 cm \n");
	printf("dengan menggunakan rumus phitagoras untuk mencari sisi miring segitiga tersebut adalah \n");
	
	printf("%.1f cm",c);
	
	return 0;
}
