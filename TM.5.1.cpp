#include <stdio.h>

int hitung_lama_bekerja(int jam_masuk, int jam_keluar) {
    if (jam_keluar < jam_masuk) {
        jam_keluar += 12; // Menambahkan 12 untuk jam keluar jika melewati tengah malam
    }
    return jam_keluar - jam_masuk;
}

int main() {
    int jam_masuk, jam_keluar, lama_bekerja;

    printf("Masukkan jam masuk (1-12): ");
    scanf("%d", &jam_masuk);
    printf("Masukkan jam keluar (1-12): ");
    scanf("%d", &jam_keluar);

    if (jam_masuk >= 1 && jam_masuk <= 12 && jam_keluar >= 1 && jam_keluar <= 12) {
        lama_bekerja = hitung_lama_bekerja(jam_masuk, jam_keluar);
        printf("Lama bekerja %d jam\n", lama_bekerja);
    } else {
        printf("Jam harus antara 1 dan 12.\n");
    }

    return 0;
}

