# 문제 해설

* 다음과 같이 if를 이용하여 연산자를 담는 변수 c의 값과 연산 기호 문자를 비교하여 분기에 따른 연산을 수행할 수 있도록 작성한다.

```C
#include <stdio.h>

int main() {
    int x, y;
    char c;
    scanf("%d %c %d", &x, &c, &y);
    if (c == '+')
        printf("%d + %d = %d\n", x, y, x + y);
    else if (c == '-')
        printf("%d - %d = %d\n", x, y, x - y);
    else if (c == '*')
        printf("%d * %d = %d\n", x, y, x * y);
    else if (c == '/')
        printf("%d / %d = %d\n", x, y, x / y);
    else if (c == '%')
        printf("%d %% %d = %d\n", x, y, x % y);
    else
        printf("올바르지 않은 연산자입니다.\n");
    return 0;
}
```