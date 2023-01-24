#include <stdio.h> 
int main(){
int l = 0 , w = 0 , total = 0;

scanf("%d %d" ,&l ,&w) ;

int A = ((l * w)% 2) ; 

    if(A == 0){
        total = (l * w) / 2;
    }else if (A == 1)
    {
        total = ((l * w)-1)/2 ;
    }
    printf("%d " ,total) ;
}