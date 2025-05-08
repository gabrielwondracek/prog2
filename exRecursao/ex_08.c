#include <stdio.h> 

int imprimeVet (int vet[], int n){
    if (n < 0){ // precisa ser menor que zero pois esse se trata da primeira posição do vetor
        return 0;
    }
    printf("%d ", vet[n]);
    imprimeVet(vet, n - 1);   
}

int main() {
    int vet[5] = {10, 9, -8, 7, -6}; 
    imprimeVet(vet, 4);

    printf("\n\n");
    for (int i = 0; i < 5; i++) //aqui mostro que não inverti o vetor, e sim imprimi o vetor em ordem reversa
    {
        printf("%d ", vet[i]);
    }

    return 0;
}