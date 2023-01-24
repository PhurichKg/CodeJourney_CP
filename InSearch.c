#include <stdio.h>
#include <string.h>
#define MAX_LIMIT 101
int main()
{
	int count , n ;
	scanf("%d" ,&n);
	char str[MAX_LIMIT] ;
  
	scanf("%d" ,&count);
    fgets(str, MAX_LIMIT, stdin);
	int init_size = strlen(str);
	char delim[] = " ";
	char *ptr = strtok(str, delim);

	for (int i = 0; i < init_size; i++)
	{
		if(str[i] == 49){
            count++;
        }
	}

	if(count > 0){
        printf("HARD");
    }else{
        printf("EASY");
    }
}
