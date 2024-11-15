#include <stdio.h>

float hitung_harga_setelah_diskon(char jenis, float harga) {
    float diskon;
    switch (jenis) {
        case 'A':
            diskon = 0.10; // Diskon 10% untuk jenis A
            break;
        case 'B':
            diskon = 0.15; // Diskon 15% untuk jenis B
            break;
        case 'C':
            diskon = 0.20; // Diskon 20% untuk jenis C
            break;
        default:
            return -1; // Mengembalikan -1 jika jenis tidak valid
    }
    return harga - (harga * diskon);
}

int main() {
    int kode;
    char jenis;
    float harga, harga_setelah_diskon;

    printf("Masukkan kode: ");
    scanf("%d", &kode);
    printf("Masukkan jenis (A/B/C): ");
    scanf(" %c", &jenis); // Spasi sebelum %c untuk mengabaikan karakter newline
    printf("Masukkan harga: ");
    scanf("%f", &harga);

    harga_setelah_diskon = hitung_harga_setelah_diskon(jenis, harga);

    if (harga_setelah_diskon < 0) {
        printf("Jenis barang tidak valid.\n");
    } else {
        printf("Jenis barang %c mendapat diskon = %.0f%%, Harga setelah didiskon = %.2f\n", 
                jenis, (jenis == 'A' ? 10 : (jenis == 'B' ? 15 : 20)), harga_setelah_diskon);
    }

    return 0;
}

