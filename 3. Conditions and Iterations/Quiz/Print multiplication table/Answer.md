# 문제 해설

* 다음과 같이 이중 for문을 이용하여 1 * 1부터 9 * 9까지의 구구단을 출력할 수 있도록 작성한다.

```C
#include <stdio.h>

int main() {
    for (int i = 1; i <= 9; i++) {
        printf("| ");
        for (int j = 1; j <= 9; j++)
            printf("%d * %d = %2d | ", i, j, i * j);
        printf("\n");
    }
    return 0;
}
```