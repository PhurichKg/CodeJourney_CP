#include <stdio.h>
#include <string.h>

int main (void) {
   char string[101]  ;
    scanf("%s" ,string);
   char temp , X = '+';
    int starter = 0 ;
   int i, j;
   int n = strlen(string);
   for (i = 0; i < n-1; i++) {
      for (j = i+1; j < n; j++) {
         if (string[i] > string[j]) {
            temp = string[i];
            string[i] = string[j];
            string[j] = temp;
         }
      }
   }
    if(n % 2 == 0){
        starter = n / 2;
    }else if(n % 2 == 1){
        starter = (n-1) / 2;
    }


   for(int i = starter ; i+1 < n ; i++){

       printf("%c",string[i]);
       printf("%c",X);
   }
   printf("%c" ,string[n -1]) ;
   return 0;
}