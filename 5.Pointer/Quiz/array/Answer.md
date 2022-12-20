# 문제 해설

```
#include <stdio.h>

int main() {
    int arr[9][9];      확인할 9X9 보드판 행렬
    int max_num= -1;    0이상 정수이므로 초기 최댓값을 0보다 작은 -1로 설정
    int row, col;       행렬의 index 선언
    
    for (int r=0; r<9; r++){
        for (int c=0; c<9; c++)
            scanf("%d", &arr[r][c]);    9X9 행렬값 전부 입력받기
    }

    for(int r=0; r<9; r++){
        for(int c=0; c<9; c++){         9X9 행렬값 전부 탐색
            if (max_num<arr[r][c]){     설정된 최댓값보다 크면
                max_num=arr[r][c];      최대값을 그때의 값으로 수정
                row=r+1;                  그때의 index를 출력형식에 맞게 +1하여 저장
                col=c+1;
            }
        }
    }                                           9X9배열 전부를 탐색하였다면
    printf("%d\n%d %d", max_num, row, col);     형식에 맞게 출력

    return 0;
}

