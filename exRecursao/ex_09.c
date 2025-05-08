#include <stdio.h>

int inverteVet(int vet[], int tmp, int ini, int fim){
    if (ini >= fim){
        return 0;
    }
    
    tmp = vet[ini];
    vet[ini] = vet[fim];
    vet[fim] = tmp;

    inverteVet(vet, tmp, ini + 1, fim - 1);
}

int main(){
    int vet[5]; //vetor de 5 posições

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &vet[i]);
    }

    inverteVet(vet, 0, 0, 4);

    for (int i = 0; i < 5; i++)
    {
        printf("%d", vet[i]);
    }
    return 0;
}