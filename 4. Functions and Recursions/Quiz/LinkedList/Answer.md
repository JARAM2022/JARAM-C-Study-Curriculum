# 1. 재귀로 구현 

```C
#include <stdio.h>
 
int fibo(int n) {
    if (n >= 2)
        return fibo(n - 1) + fibo(n - 2);
    else if (n == 1) return 1;
    else return 0;
}
```
*****

# 2. 꼬리재귀로 구현 
```C
#include <stdio.h>

int fibo2(int n, int total){
    if ( n >= 2){
        total += fibo(n);
        return total;
    }
    else if (n == 1) return 1;
    else return 0;
}
```