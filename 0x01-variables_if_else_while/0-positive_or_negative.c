#include <stdlib.h>
#include<sdio.h>
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if(n>0)
{
printf("%d is positive" , n );
} 
if(n<0)
{
printf("%d is nigative" , n );
} 
if(n=0)
{
printf("%d is zero" , n );
}
return(0); 
}
