#include <stdio.h>     
#include <stdlib.h>    
#include <string.h>
    int main(){      
        
        int nCasos, n1, n2, j;
        char pessoa1[20];
        char pessoa2[20];
        
        scanf("%d", &nCasos);   
        for(int i = 0; i < nCasos; i++){
            j = i + 1;
           scanf("%s", pessoa1);
           scanf("%s", pessoa2);
           scanf("%d", &n1);
           scanf("%d", &n2);
           if(n1 > n2){
               printf("%d: %s %d : %s > %s\n", j, pessoa1, n1, pessoa1, pessoa2);
           }
           else if(n1 < n2){
               printf("%d: %s %d : %s < %s\n", j, pessoa2, n2, pessoa1, pessoa2);
           }
           else{
               printf("%d: empate : %s = %s\n", j, pessoa1, pessoa2);
           }
        }   
        return 0;
    }