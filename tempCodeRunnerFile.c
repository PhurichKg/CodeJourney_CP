#include <stdio.h>

int main(){
    int n ; 
    int totalodd = 0 , totaleve = 0 ;
    int sum ;
    scanf("%d" ,&n);

    for(int i = 0 ; i <= n ; i ++){
        if(i % 2 == 0){
           totaleve = totaleve + i ;
        }else{
            totalodd = totalodd + i;
        }
        }
         sum = totaleve - totalodd ;
        printf ("%d" ,sum);
    }
