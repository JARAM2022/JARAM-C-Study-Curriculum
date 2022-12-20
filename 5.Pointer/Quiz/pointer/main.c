#include <stdio.h>
#include <string.h>

char    *ft_strcpy(char *dest, char *src)
{
    // fill here //
    
    // fill here //
    return dest;
}

int main(){
    char src[] = "hello";
    char dest[10];
    char dest2[10];
    int idx = 0;
    
    strcpy(dest, src);
    ft_strcpy(dest2, src);
    
    while (dest[idx] != 0){
        if (dest[idx] != dest2[idx]){
            printf("오답입니다.\n");
            return 0;
        }
        idx++;
    }
    printf("정답입니다.\n");
    return 0;
}
