#include <stdio.h>
#include <string.h>
int main(){

    int n = 12 ; 
    int ary[] = {12,34,42,64,1,4,89};

    for(int i = 0 ; i < 6 ; i++){
        if(ary[i] == n){
            printf("Found at %d" ,i+1);
        }
    }

}