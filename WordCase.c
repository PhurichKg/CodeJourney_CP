#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(){

    char str[1001];
    char a ;
    scanf("%s" ,str) ;
    a = toupper(str[0]);
    
    printf("%c" ,a);
    for(int i = 1 ; i < strlen(str) ; i++ ){
        printf("%c" ,str[i]);
    }
}