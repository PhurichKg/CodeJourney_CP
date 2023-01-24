#include <stdio.h>
#include <string.h>
int main(){

    int n = 0 , len = 0;
    scanf("%d " ,&n);
    char st [1001] ;
    for(int i = 0 ; i < n ; i++){
        scanf("%s" ,st);
         len = strlen(st) ;

        if(len > 10){
            printf("%c%d%c " ,st[0] ,len-2 ,st[len-1]);
        }else{
            printf("%s " ,st);
        }

    }
    
}