#include <stdio.h>
 // unfinish
int main(){
    int k =0 , n = 0 , count = 0 , invCount = 0 , pep = 0;
    scanf("%d %d" ,&k ,&n);
    int arry[1][k] ; 
    
    for(int i=0; i<1; i++) {
      for(int j=0;j<k;j++) {
         scanf("%d", &arry[i][j]);
      }
   }
    for(int i=0; i<1; i++) {
      for(int j=0;j<k;j++) {
          if(arry[i][j] > 0){
            pep++;
          }
        if(arry[i][j] <= k && arry[i][j] >= n ){
            count ++ ;
        }else{
            invCount ++ ;
        }
      }
   }
   if(count == 0 && n == k){
       count = n ;
   }else if(count == 0 && n == k && pep ){
       
   }

 if(invCount > count && count != 0){
     count = invCount ;
 }
    printf("%d " ,count) ;
    printf("%d " ,pep );
} 