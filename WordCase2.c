#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
int main(){
    int upcount , locount ;
    int len ;
    char str[101] ;
    scanf("%s" ,str);
    len = strlen(str);
 
    char Str[len ] ;
 
    for (int i = 0 ; i < len ; i ++){
        if ( str[i] >= 'a' && str[i] <= 'z'){
            locount ++ ;
        }else {
            upcount ++ ;
        }
    }
    if(locount == upcount){
    
   
    for(int i = 0 ; i < len ; i++){
        Str[i] = tolower(str[i]) ;
    }
 
        printf("%s" ,Str) ;
    }else if (upcount > locount){
         for(int i = 0 ; i < len ; i++){
        Str[i] = toupper(str[i]) ;
    }
 
        printf("%s" ,Str) ;
    }else{
        for(int i = 0 ; i < len ; i++){
        Str[i] = tolower(str[i]) ;
    }
        printf("%s" ,Str) ;
    }
}
