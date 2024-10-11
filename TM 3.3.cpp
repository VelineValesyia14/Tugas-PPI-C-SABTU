#include <stdio.h>
#include <math.h>

int main (){
	
	float A, T, M;
	//input sisi A dan T
	
	printf("masukan nilai sisi alas segitiga menggunakan satuan cm : ");
	scanf ("%f", &A);
	
	printf ("Masukan nilai sisi tinggi segitiga menggunakan satuan cm : ");
	scanf ("%f", &T);
	
	//perhitungan sisi miring dengan rumus pitagoras 
	M = sqrt (A*A + T + T);
	//tampilkan hasil perhitungan 
	printf("jumlah sisi miring segitiga adalah : %.2f cm \n", M);
	
	return 0;
	
}
