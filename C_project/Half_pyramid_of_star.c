#include <stdio.h>


int main(void)
{
// This program prints half pyramid pattern of stars

int i, j, rows;

printf("Enter the number of rows: ");
scanf("%d", &rows);


for (i = 1; i <= rows; i++)
{
     for (j = 1; j <= i; j++)
     {
          printf("* ");
     }

printf("\n");     



}


return (0);

}

