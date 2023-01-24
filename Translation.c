#include <stdio.h>
#include <string.h>

int main()
{
  char str[1000];
  char restr[1000];
  int count = 0 ;
  scanf("%s", str);
  scanf("%s" ,restr) ;
   int n = strlen(str);

  for (int i = 0; i < n / 2; i++)
  {
    char ch = str[i];
    str[i] = str[n - i - 1];
    str[n - i - 1] = ch;
  }

    for(int i = 0 ; i < n ; i++){
        if(str[i] == restr[i]){
            count++;
        }
    }

    if(count == n){
        printf("YES" ) ;
    }else{
        printf("NO" ) ;
    }
    
  return 0;


}

