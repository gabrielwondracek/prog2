#include <stdio.h>

int figofruta(int a){
    if (a == 1){
        return 1;
    }
    else if(a == 0) {
        return 0;
    }
    return figofruta(a - 1) + figofruta(a - 2);
}

int main(){
    int a = 0;
    scanf("%d", &a);

    figofruta(a);
    printf("%d", figofruta(a));

    return 0;
}