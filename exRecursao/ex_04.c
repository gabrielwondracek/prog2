#include <stdio.h>

int intervalo(int a, int b, int c){
    if(a > b){
        return 0;
    }
    printf("%d ", a);
    return a + intervalo(a + c, b, c);
}

int main(){
int a, b, c; // a será o intervalo inferior, b o intervalo superior e c o incremento
scanf("%d %d %d",  &a, &b, &c);
intervalo(a, b, c);
return 0;
}