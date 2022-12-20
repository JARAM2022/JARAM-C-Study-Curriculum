# 문제 해설

```
int main(){
    int r, c;
    scanf("%d %d", &r, &c);
    int **mat = (int **)malloc(sizeof(int*) * r);    // 포인터를 인수로 갖는 이중배열 할당
    for (int i = 0; i < r; i++)
        mat[i] = (int *)malloc(sizeof(int)*c);        // 각 행마다 배열할당
    for (int i = 0; i < r; i++)
        free(mat[i]);        // 따라서 할당 해제해 줄때도 for문을 통해 각각 free해줘야한다.
    
    free(mat);              // 후에 int **mat한것도 할당해제가 필요
    return 0;
}
