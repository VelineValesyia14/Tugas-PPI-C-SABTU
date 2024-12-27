#include <stdio.h>

int main() {
    int nilai[10], i;

    // Meminta input nilai dari pengguna
    printf("Masukkan 10 nilai mahasiswa:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &nilai[i]);
    }

    // Mencetak nilai mahasiswa yang lulus (>= 60)
    printf("\nNilai mahasiswa yang lulus:\n");
    for (i = 0; i < 10; i++) {
        if (nilai[i] >= 60) {
            printf("%d ", nilai[i]);
        }
    }

    return 0;
}
