#include <stdio.h>

int palin(char vet[], int ini, int fim) {
    if (ini >= fim) {
        return 1; 
    }

    if (vet[ini] != vet[fim]) {
        return 0; 
    }

    return palin(vet, ini + 1, fim - 1);
}

int main() {
    char vet[] = {'o', 's', 's', 'o'};
    int tamanho = sizeof(vet) / sizeof(vet[0]);

    if (palin(vet, 0, tamanho - 1)) {
        printf("É palíndromo");
    } else {
        printf("Não é palíndromo");
    }

    return 0;
}
