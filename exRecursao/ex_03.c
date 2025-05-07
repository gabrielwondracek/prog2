#include <stdio.h>

int somaN(int n, int clock, int a){  
    if(clock == n ){
        return 0;
    }
    return a + somaN(n, clock + 1, a + 1);
}

int main(){
int n = 0;//limite superior
int clock = 0;
int a = 1; //variável para a soma, definido como 1 pois a soma começa com 1
scanf("%d", &n);
somaN(n, clock, a);
printf("%d\n", somaN(n, clock, a));
return 0;
}