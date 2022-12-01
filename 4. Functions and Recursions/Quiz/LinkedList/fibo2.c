#include <stdio.h>

int fibo2(int n, int total){
    if ( n >= 2){
        total += fibo(n);
        return total;
    }
    else if (n == 1) return 1;
    else return 0;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", fibo2(n,0));
    return 0;
  }