#include <stdio.h> 

int main(){
    
    int n, total , count = 0; 
    scanf("%d" ,&n) ;
    int ary[n][2];
    int firar[n];
    int secar[n];
    for(int i = 0 ; i < n ;i++){
        for(int j = 0 ; j < 2 ; j++){
            scanf("%d" ,&ary[i][j]); 
        }
    }
    for(int i=0; i<n; i++) {
      for(int j=0;j<1;j++) {
         firar[i] = ary[i][0];
         secar[i] = ary[i][1] ;
      }
   }
    for(int i = 0 ; i < n ; i++ ){
        total = 0 ;
        total = secar[i] - firar[i]   ;
        
        if(total > 1 ){
            count++ ;
        }
    }
    printf("%d" ,count) ;
}