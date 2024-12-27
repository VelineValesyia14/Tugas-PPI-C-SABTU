#include <stdio.h>

int main() {
    int i, value = 1;
    // Mencetak nilai yang digandakan setiap iterasi
    for(i = 1; i <= 11; i++) {
        printf("%d ", value);
        value *= 2; // Mengalikan nilai dengan 2 setiap iterasi
    }
    printf("\n");
    return 0;
}
