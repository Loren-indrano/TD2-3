#include <stdio.h>

#define MAX1 100
static const int MAX2 = 100;

int main() {
    // int *p1 = &MAX1; // Erreur de compilation
    int *p2 = &MAX2;    // Correct

    printf("Adresse de MAX2 : %p\n", (void*)p2);
    return 0;
}
