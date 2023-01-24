#include <stdio.h> 
int main(){
    int n ,siglep = 0, sigles = 0 ,count = 0; 
    scanf("%d" ,&n );
    int ary[n] ;

    for(int i = 0 ; i < n ; i ++ ){
        scanf("%d",&ary[i]); 
    }
    if (n == 3 && (siglep == 1|| sigles == 1)){
        count = 3 ;
    }else{
    for(int i = 0 ; i < n ; i ++ ){
        if(ary[i] != ary[i+1]){
            count++;
            
        } 
    }
    }
   printf("%d" ,count) ;
    

}

