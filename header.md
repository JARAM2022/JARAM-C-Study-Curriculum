1. 다음 코드의 컴파일 결과는?


```c
#include <stdio.h>
#define ERROR 0

int main()
{
    #if ERROR == 1
    printf("오류코드 : %d", ERROR);
    #elif ERROR == 2
        printf("오류코드 : %d", ERROR);
    #else
        printf("오류코드 : %d", ERROR);
}
```
정답 : 컴파일 에러( 이유 : #endif가 포함되지 않았다. )


2. 다음 코드에서 문제점을 찾으시오

```C
#include<stdio.h>

int main()
{
  FILE *fp;

  fp = fopen("test.txt", "w");

  if(fp == NULL){
    printf("파일열기 실패\n");
  } else {
    printf("파일열기 성공\n");
  }

  return 0;
}
```
정답 : 파일을 연 후 닫지 않았다. ( " fclose(fp); "가 작성되지 않음 )