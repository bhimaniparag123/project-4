/*
  11
  12 13
  14 15 16
  17 18 19 20
*/
#include <stdio.h>

int main()
{
	int i,j,count=11;
    
    for (int i = 1; i <= 4; i++) 
	{
        for (int j = 1; j <= i; j++) 
		{
            printf("%d ", count);
            count++;
        }
        
        printf("\n");
    }
}