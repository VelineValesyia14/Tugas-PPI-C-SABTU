#include <stdio.h>
#include <math.h>

int main (){
	float A, T, L, K, sM;
	printf("Masukan Nilai Panjang Alas Segitiga dalam satuan CM :");
	scanf("%f", &A);
	
	printf("Masukan Nilai Tinggi segitiga dalam satuan CM : ");
	scanf("%f", &T);
	
	L = 0.5 * A * T;
	sM = sqrt (A*T + T + T);
	K = A + 2 * sM;
	
	printf("Jumlah Luas Segitiga : %.2f cm^2 \n", L);
	printf("jumlah Keliling Segitiga : %.2f cm \n", K);
	
	return 0;
}
