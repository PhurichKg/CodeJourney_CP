#include <stdio.h>
#include <string.h>

int main(){
    int len , n = 1  , count = 0  ;
    char str[101] ;
    scanf("%s" ,str);
    len = strlen(str);

    for(int i = 0 ; i < len ; i++){
        for(int j = i + 1 ; j < len ; j++){
            if(str[i] == str[j]){
                if(n == 1 && str[j] != '\0' ){
                    count ++ ;
                }
            str[j] = '\0' ;
            n++ ;
            }

        }
        n = 1 ;
    }
    printf("%d" ,count) ;
    if((len - count)%2 == 0){
        printf("CHAT WITH HER!") ;
    }else{
        printf("IGNORE HIM!") ;
    }
}