# 문제 해설

```
char    *ft_strcpy(char *dest, char *src)
{
    int    cnt;

    cnt = 0;
    while (*src)    // src의 끝부분 = \0전까지 반복
    {
        src++;
        cnt++;      // cnt는 src의 길이를 저장
    }
    src -= cnt;     // src의 초기주소 (src[0]의 주소)로 복귀
    while (cnt >= 0)// src길이만큼 반복
    {
        dest[cnt] = src[cnt];   // dest에 src를 복사
        cnt--;
    }
    return (dest);  // 그렇게 복사된 dest를 반환
}
