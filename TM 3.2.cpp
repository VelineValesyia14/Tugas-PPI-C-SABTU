#include <stdio.h>

int main (){
	
	int Celcius; 
	float Fahrenheit, Reamur;
	printf("Masukan nilai suhu dalam satuan C (celcius) :");
	scanf("%d", &Celcius);
	Fahrenheit = (9.0 / 5.0 * Celcius) + 32;
	Reamur = 5.0 / 4.0 * Celcius;
	
	printf("Masukan nilai suhu dalam satuan Fahrenheit (F) : %.2f \n", Fahrenheit);
	printf("Masukan nilai suhu dalam satuan Reamur (R) : %.2f \n", Reamur);
	
	return 0; 

}
