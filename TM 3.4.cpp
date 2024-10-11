#include <stdio.h>

int main (){
	
	int Bilangan;
	//Masukan bilangan positif 
	printf("Masukan bilangan bulat yang bernilai positif : ");
	scanf("%d", &Bilangan);
	//Pembuktian apakah bilangan tersebut bernilai ganjil atau genap 
	if(Bilangan <0){
		printf("Masukan nilai bilangan : ");
	} 
	else if (Bilangan %2 == 0){
		printf("(GENAP\n)");
	}
	else {
		printf("(GANJIL\n)");
	}
	
	return 0;
}
