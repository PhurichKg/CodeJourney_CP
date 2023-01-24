#include <stdio.h>
#include <string.h>
#define MAX_LIMIT 101 
int main(){


char str[MAX_LIMIT] ;
fgets(str, MAX_LIMIT, stdin);
int init_size = strlen(str);
char atr[MAX_LIMIT] ;
fgets(atr, MAX_LIMIT, stdin);
char total[init_size] ;

for(int i = 0 ; i < init_size ; i++ ){
    if(str[i] == atr[i] && str[i] + atr[i] == 2 ){
        total[i] = '0' ;
    }else if(str[i] == '1' && atr[i] == '0'|| str[i] == '0' && atr[i] == '1'){
        total[i] = '1';
    }else{
        total[i] = '0';
    }
}

for(int i = 0 ; i < init_size -1 ; i++ ){
    printf("%c" ,total[i]);
}
 
}