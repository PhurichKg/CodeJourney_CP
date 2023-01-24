#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
	int n = 0 , count = 0;
	char at ;
	scanf("%d" ,&n) ;
	char str[3];
	for(int i = 0 ; i < n ; i++){
		scanf("%s" ,str) ;
		at = str[1];
		if(at == '-'){
			count--;
		}else if (at == '+'){
			count++;
		}
	}
	printf("%d" ,count);
}