#include <stdio.h>
#include <string.h>

int main(){
    int len = 0 ;
    int count = 0 ;
    char str[10001] ;
    len = strlen(str) ;
    scanf("%s" ,str) ;
    for(int i = 0 ; i < len ; i++){
        if(str[i] == '4' || str[i] == '7'){
            count++ ;
        }

    }
    if (count == len )
    {
        printf("Yes");
        
    }else{
        printf("No");
    }

}