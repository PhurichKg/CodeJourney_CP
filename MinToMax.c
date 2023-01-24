#include <stdio.h>

int main(){
    
    int ary[3] ;
    int test ; 
    for(int i = 0 ; i < 3 ; i++){
        scanf("%d" ,&ary[i]);
    }
    

    for(int i = 0 ; i < 2 ; i++){
        for(int j = i + 1 ; j < 3 ; j++){
            if(ary[i] > ary[j]){
            test = ary[i] ;
            ary[i] = ary[j];
            ary[j] = test ;
            }

        }
    }
    
    for(int i = 0 ; i < 3 ; i++){
        printf("%d " ,ary[i]);
    }
}