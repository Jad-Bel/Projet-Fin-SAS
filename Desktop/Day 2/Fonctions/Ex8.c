#include <stdio.h>

int EstPair(int n) {
    if(n % 2 == 0) {
        printf("Le nombre %d est: pair.", n); return 1;
    } else {
        printf("Le nombre %d est: impair.", n); return 0;
    }

}

int main() {
    int n;

    printf("\nEntrer un nombre que vous voudrez identifier: ");
    scanf("%d", &n);

int Pair = EstPair(n);

    printf("\nRetour de la fonction: %d", Pair);

    return 0;
}