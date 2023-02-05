#include <stdio.h>
int main() {
int i, j;
int rows;
printf("Enter the number of rows:");
scanf("%d",&rows);
for(i=1;i<=rows;i++)
{
    for(j=1;j<=i;j++)
    {
        printf ("*   ");
        
    }
    printf ("\n");
}
for(i=rows-1;i>0;i--)
{
    for(j=1;j<=i;j++)
    {
        printf ("*  ");
    }
    printf ("\n");
}

    return 0;
}
-----------
Output:-
Enter the number of rows:4
*   
*   *   
*   *   *   
*   *   *   *   
*  *  *  
*  *  
*
