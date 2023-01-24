#include <stdio.h>

int main(){
    int k =0 , n = 0 , w = 0 ;
    int total = 0 ;
    scanf("%d%d%d" ,&k,&n,&w);
    int arry[w] ;

    for(int i = 0 ; i < w ; i++){
        arry[i] = k;                    
    }
    for(int i = 0 ; i < w ; i++){
        total += ((i+1)* arry[i]) ;
    }

    if(total > n ){
    total = total - n ;
    }else{
        total = 0 ;
    }

printf("%d " ,total); 
    
}