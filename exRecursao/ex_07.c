#include <stdio.h>
int imprimeVet (int vet[], int n){
    if (n > 4){ // precisa ser maior que 4 pois o mesmo se trata da última posição do vetor
        return 0;
    }
    printf("%d ", vet[n]);
    imprimeVet(vet, n + 1);   
}


int main() {
    int vet[5] = {10, 9, -8, 7, -6};
    imprimeVet(vet, 0);
    return 0;
}