#include <stdio.h>

int multi(int a, int b){
    if (b == 0){
        return 0;
    }

    return a + multi(a, b - 1);
}

int main(){
    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);
    multi(a, b);
    printf("%d", multi(a,b));

    return 0;
}