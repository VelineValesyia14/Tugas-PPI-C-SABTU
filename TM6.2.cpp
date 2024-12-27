#include <stdio.h>

int main() {
    int i;
    // Mulai dari 100, hingga 55, decrement 5
    for(i = 100; i >= 55; i -= 5) {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}
