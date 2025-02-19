#define MAX1 100
static const int MAX2 = 100

int *p1 = &MAX1; // Erreur : MAX1 n'a pas d'adresse mémoire
int *p2 = &MAX2; // OK : MAX2 a une adresse

