# 문제 해설

* n값에 따른 ' '과 '*'의 반복되는 출력 패턴을 잘 파악한 후, 다음과 같이 이중 for문을 이용하여 2 * n + 1 (n > 0) 크기의 별 다이아몬드를 출력할 수 있도록 작성한다.

```C
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++)
            printf(" ");
        for (int j = 0; j < 2 * i + 1; j++)
            printf("*");
        printf("\n");
    }

    for (int i = 0; i < 2 * n + 1; i++)
        printf("*");
    printf("\n");

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i + 1; j++)
            printf(" ");
        for (int j = 0; j < 2 * (n - i) - 1; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}
```