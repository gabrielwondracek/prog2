#include <stdio.h>

int somaVet(int vet[], int ini, int n){
    if (ini == n){
        return 0;
    }
    return vet[ini] + somaVet(vet, ini + 1,n); //soma os elementos do vetor de tamanho n
}

int main (){
    int n = 0; // n é o tamanho do vetor
    scanf("%d", &n);
    int vet[n];
    for(int i = 0; i < n; i++){ // recebe os valores do vetor de tamanho n
        scanf("%d", &vet[i]);
    }
    somaVet(vet, 0, n);
    printf("%d", somaVet(vet, 0, n));
    return 0;
}