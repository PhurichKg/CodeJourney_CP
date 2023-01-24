#include <stdio.h>
int main(){
    int n = 0 ; 
    scanf("%d" ,&n);
	
	int arr[n][3] ;
	int count = 0;
	int total ;

	int firstarr[n];
    int scoundarr[n] ;
	
		for(int i=0;i<n;i++)          //represents rows
		{
			for(int j=0;j<3;j++)      //represents columns
			{
				scanf("%d",&arr[i][j]);
			}
		}

		for(int i=0;i<n;i++)          //represents rows
		{
			total = 0;
			for(int j=0;j<3;j++)      //represents columns
			{
			 	total = total + arr[i][j]; 
				 
			}
			printf("%d" ,total ) ; 
			if(total >= 2){
				count++;
			}
			
		}
		printf("%d" ,count);

}