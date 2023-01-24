#include <stdio.h>


int main(){
int loca = 0 ; 
int totals = 0;
scanf("%d" ,&loca );

while (loca > 0)
{
    loca = loca - 5 ;
    totals++ ;
}

printf("%d" ,totals) ;

}