#include <stdio.h>

int main() {
    int A[11], i, j = 0;
    int data[] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35};

    // Menyimpan nilai genap ke dalam array A
    for (i = 0; i < 11; i++) {
        if (data[i] % 2 == 0) {
            A[j] = data[i];
            j++;
        }
    }

    // Mencetak isi array A
    printf("Isi array A:\n");
    for (i = 0; i < j; i++) {
        printf("%d ", A[i]);
    }

    return 0;
}
