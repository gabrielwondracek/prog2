#include <stdio.h>
int mdc(int x, int y){
    if (x == 0){
        return y;
    }
    else if (y == 0){
        return x;
    }

    return y = mdc(y,x % y);
}

int main(){
    int x = 0;
    int y = 0;
    scanf("%d %d", &x, &y);

    mdc(x, y);

    printf("%d", mdc(x, y));

    return 0;
}