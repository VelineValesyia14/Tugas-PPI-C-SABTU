#include <stdio.h>
int main() {
    int angka;
    // Input bilangan bulat positif
    printf("Masukkan bilangan bulat positif: ");
    scanf("%d", &angka);
    // Memeriksa apakah bilangan ganjil atau genap
    if (angka % 2 == 0) {
        printf("(GENAP)\n");
    } else {
        printf("(GANJIL)\n");
    }
return 0;
}
