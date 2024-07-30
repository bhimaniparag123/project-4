/*
  * * * * *
  *       *
  * * * * *
  *
  *
*/
#include <stdio.h>

main() 
{
    int i,j;

    for (int i = 0; i < 5; i++) 
	{
        for (int j = 0; j < 5; j++) 
		{
            if (i == 0 || i == 2) 
			{
                printf("* ");
            } else if (i == 1 && (j == 0 || j == 5 - 1)) 
			{
                printf("* ");
            } else if (i == 1) 
			{
                printf("  ");
            } else if (i > 2 && j == 0) 
			{
                printf("* ");
            }
        }
        printf("\n");
    }

    return 0;
}
