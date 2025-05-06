#include <stdio.h>

int intervalo(int a, int b){
    if(a > b){
        return 0;
    }
    printf("%d ", a);
    return a + intervalo(a + 1, b);
}

int main(){
int a, b; // a será o intervalo inferior e b o intervalo superior
scanf("%d %d",  &a, &b);
intervalo(a, b);
return 0;
}