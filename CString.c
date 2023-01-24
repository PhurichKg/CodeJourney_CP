#include <stdio.h>
#include <string.h>
int main(){
int count = 0 ;
int len ;
scanf("%d" ,&count);
char arr[count][100] ; 
for(int j = 0 ; j < count ; j++){
    scanf("%s" ,arr[j]);    
}
for (int i = 0; i < count; i++)
{
    if(strlen(arr[i]) < 10){
        printf("%s " , arr[i]);
    }
    else{
        len = 0 ; 
        len = strlen(arr[i]);
    
        printf("%d \n",len);
    }

}




// for(int i = 0 ; i < count ; i++){
//     printf("%s/n" , arr[i]);
// }


// int len = 0 ; 
// char str[12] ;

// scanf("%s" ,str);
// len = strlen(str);
// int n = len ;
// 


}