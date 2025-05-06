#include <stdio.h>

int fatorial(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    return n * fatorial(n - 1);
}

int main(){
int n = 0;
scanf("%d", &n);
fatorial(n);
printf("%d\n", fatorial(n));
return 0;
}