#include <stdio.h>

int main(){
    int inp, result = 0;
    for(int i = 0 ;  i < 5 ; i++){
        scanf("%d", &inp);
        result += inp*inp;
    }
    printf("%d\n", result%10); 
    
    
    return 0;  
}