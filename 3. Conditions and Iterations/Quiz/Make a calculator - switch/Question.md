# switch를 활용한 계산기 만들기
### 문제 분류
* 선택 구조, switch

### 문제 개요
* 두 정수와 연산자를 입력받은 후, 선택 구조인 switch를 이용하여 연산자에 따라 더하기/빼기/곱하기/나누기/나머지 연산을 수행하는 계산기를 만들어라. 만약 올바르지 않은 연산자가 입력될 경우, "올바르지 않은 연산자입니다"가 출력되도록 하라. 주어진 makeACalculatorSwitch.c의 스켈레톤 코드를 완성하여 다음 결과 출력 예시처럼 올바른 계산 기능을 수행할 수 있도록 하라. 이때 makeACalculatorSwitch.c 외 다른 파일은 편집할 수 없으며 추가적으로 파일을 생성해선 안된다.

```C
#include <stdio.h>

int main() {
    int x, y;
    char c;
    scanf("%d %c %d", &x, &c, &y);
	/*
    ---your code goes here---
    */
    return 0;
}
```

### 답안 작성
* 주어진 makeACalculatorSwitch.c 파일만을 수정하여 답안으로 제출한다.
* makeACalculatorSwitch.c 출력 예시
    * ![1](https://user-images.githubusercontent.com/56226889/208773359-554a82b5-4f9c-4f01-9ea9-e829cf1d9c2a.png)
    * ![2](https://user-images.githubusercontent.com/56226889/208773671-5a84d958-a95c-4c2b-87a5-bb002b109c48.png)
    * ![3](https://user-images.githubusercontent.com/56226889/208773687-43703963-db15-428c-bcf7-2696ec88d982.png)
    * ![4](https://user-images.githubusercontent.com/56226889/208773689-fd9be88f-ed8b-48a7-9618-9eec6e2dbad1.png)
    * ![5](https://user-images.githubusercontent.com/56226889/208773692-8faa2151-a893-4463-9b94-62b6b1be69f8.png)
    * ![6](https://user-images.githubusercontent.com/56226889/208773698-347f7fc4-a6d5-48c4-a0a8-0700f78bff11.png)