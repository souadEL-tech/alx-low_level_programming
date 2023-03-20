#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
    int last_digi=n%10;
    if(last_digi >5)
    {
        printf("Last digital of %d is %d and is greater than 5" , n , last_digi);
    }
    else
    {
        if(last_digi==0)
        {
            printf("Last digital of %d is %d and is 0" , n , last_digi);
        }
        else
        {
            if(last_digi<6 && last_digi!=0)
            { 
                printf("Last digital of %d is %d and is less than 6 and not 0" , n , last_digi);
                
            }
        }
    }
    
	return (0);
