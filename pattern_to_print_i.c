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
        printf ("%2d ",i);
        
    }
    printf ("\n");
}

    return 0;
}
Output:-
Enter the number of rows:3
1 
2  2 
3  3  3
