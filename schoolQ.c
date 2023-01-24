#include <stdio.h>
#include <string.h>
int main(){
    int n , t ;
    char str[101] ;
    char tot[101] ;
    scanf("%d%d" ,&n ,&t) ; 
  
        scanf("%s" ,str);
    for(int j = 0 ; j < t ; j ++){
        strcpy(tot, str) ;
    for(int i = 0 ; i < n ; i++ ){
        if(str[i] == 'B' && str[i+1] == 'G'){
            tot[i] = 'G' ;
            tot[i+1] = 'B';
        }   
    }
            
            strcpy(str, tot) ;
    }
   printf("%s " ,tot) ;
 }