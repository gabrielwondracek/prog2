#include <stdio.h>
#include <stdlib.h>    
#include <string.h>

//Ja peço perdao por não fazer o uso de funções neste código professor.

int main(){
    int nCasos, tamMatriz, qtdOperacao, a, b; 
    char operacao[10];

    scanf("%d", &nCasos);
    for(int i = 0; i < nCasos; i++){
        scanf("%d", &tamMatriz);
        int matriz[tamMatriz][tamMatriz];
        for(int j = 0; j < tamMatriz; j++){
            for(int k = 0; k < tamMatriz; k++){
                scanf("%d", &matriz[j][k]);
            }
        }
        scanf("%d", &qtdOperacao);
        for(int l = 0; l < qtdOperacao; l++){
            scanf("%s", operacao);
            //INCREMENTO 
            if(strcmp(operacao, "inc") == 0){
                for (int i = 0; i < tamMatriz; i++) {
                    for (int j = 0; j < tamMatriz; j++) {
                        matriz[i][j] = (matriz[i][j] + 1) % 10;
                    }
                }
            }
            //DECREEEEEEEEEEEEEEEEEEEEEEEESIMO
            else if(strcmp(operacao, "dec") == 0){
                for (int i = 0; i < tamMatriz; i++) {
                    for (int j = 0; j < tamMatriz; j++) {
                        matriz[i][j] = (matriz[i][j] - 1 + 10) % 10;
                    }
                }
            }
            //TRANSPOSTA
            else if(strcmp(operacao, "transpose") == 0){ 
                for (int i = 0; i < tamMatriz; i++) {
                    for (int j = i + 1; j < tamMatriz; j++) {
                        int temp = matriz[i][j];
                        matriz[i][j] = matriz[j][i];
                        matriz[j][i] = temp;
                    }
                }
            }
            //TROCA COLUNA
            else if(strcmp(operacao, "col") == 0){
                scanf("%d", &a);
                scanf("%d", &b);
                int temp = matriz[i][a - 1];
                matriz[i][a - 1] = matriz[i][b - 1];
                matriz[i][b - 1] = temp;
            }
            //TROCA LINHA
            else if(strcmp(operacao, "row") == 0){
                scanf("%d", &a);
                scanf("%d", &b);
                for (int i = 0; i < tamMatriz; i++) {
                    int temp = matriz[a - 1][i];
                    matriz[a - 1][i] = matriz[b - 1][i];
                    matriz[b - 1][i] = temp;
                  }
            }
        }

        //IMPRIME A MATRIZ
        printf("CASE #%d \n", i + 1);
        for(int j = 0; j < tamMatriz; j++){
            for(int k = 0; k < tamMatriz; k++){
                printf("%d ", matriz[j][k]);
            }
            printf("\n");
        }

    }
    return 0;
}