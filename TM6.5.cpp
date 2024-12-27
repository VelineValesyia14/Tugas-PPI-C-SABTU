#include <stdio.h>

int main() {
    double saldo = 1000000;  // Saldo awal Rp. 1.000.000
    double bunga = 0.02;     // Bunga 2% per bulan
    int bulan;

    // Menghitung saldo setelah 10 bulan
    for(bulan = 1; bulan <= 10; bulan++) {
        saldo += saldo * bunga;  // Menambahkan bunga setiap bulan
    }
    
    printf("Jumlah uang setelah 10 bulan: Rp. %.2f\n", saldo);
    return 0;
}
