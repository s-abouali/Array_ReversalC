#include <stdio.h>

int main() {

    int i, *P1, *P2, T[100], n, a;
    do {
        printf("Enter the size: ");
        scanf("%d", &n);

    } while (n <= 0 || n > 100);

    for (P1 = T; P1 < T + n; P1++) {

        printf("Enter the value: ");
        scanf("%d", P1);
    }

    P1 = T;
    P2 = T + n - 1;

    while (P1 < P2) {

        a = *P1;
        *P1 = *P2;
        *P2 = a;

        P1++;
        P2--;
    }
    printf("Reversed array: ");

    for (i = 0; i < n; i++) {
        printf("%d ", T[i]);
    }

    return 0;
}