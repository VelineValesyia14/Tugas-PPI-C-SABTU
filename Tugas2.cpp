#include <stdio.h>
int main ()
{

	//Deklarasi variable
	float diameter = 15.0; //Diameter bola
	float r=diameter/2.0;//jari-Jari bola
	float volume;//variabel untuk menyimpan volume 
	//menghitung volume bola
	volume= (4.0/3.0)*3.14*(r*r*r);
	//menampilan hasil
	printf("volume bola dengan diameter %.2f cm adalah : %.2f cm^3 \n,",diameter, volume);
	
	return 0;
}
