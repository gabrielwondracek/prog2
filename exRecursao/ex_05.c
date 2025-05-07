#include <stdio.h>

int exponencial (int b, int e){
    if(e == 0){
        return 1;
    }
    return b * exponencial(b, e - 1);
}

int main(){
    int b, e; // b será a base e e o expoente
    scanf("%d %d",  &b, &e);
    exponencial(b, e);
    printf("%d\n", exponencial(b, e));
    return 0;
}