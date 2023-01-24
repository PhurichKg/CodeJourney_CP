#include <stdio.h>

int main(){

    int n ,total ; 
    scanf("%d" ,&n); 

    int arr[n][2];
    int brr[n];
    int crr[n] ;
    int sum[n] ;
    for(int i = 0 ; i < n ; i++){
        for (int j = 0; j < 2; j++)
        {
            scanf("%d" ,&arr[i][j]);
        }
    }
    for(int i=0; i<n; i++) {
      for(int j=0;j<1;j++) {
         brr[i] = arr[i][0];
         crr[i] = arr[i][1] ;
      }
   }
 for(int i = 0 ; i < n ; i++){
     if(sum[0]){
      sum[0] = arr[0][1] ;
     }
     sum[i+1] = (sum[i] - brr[i+1]) + crr[i+1] ; 
    }

for (int i = 1; i < n; ++i) {
    if (sum[0] < sum[i]) {
      sum[0] = sum[i];
    }
  }
printf("%d", sum[0]);
}