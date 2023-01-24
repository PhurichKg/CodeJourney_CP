#include <stdio.h>
int main()
{
    int n = 0 ; 
    scanf("%d" ,&n); 

int result = (n % 2);
if(n == 2){
    printf("NO");
}
else{
if(result == 0 ){
    printf("YES");
}
else{
    printf("NO");
}
}
}