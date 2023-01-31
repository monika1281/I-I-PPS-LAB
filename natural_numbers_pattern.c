#include <stdio.h>
int main() {
int I, j;
int number=1;
int rows;
printf("Enter the number of rows:");
scanf("%d",&rows);
for(I=1;I<=rows;I++)
{
    for(j=1;j<=I;j++)
    {
        printf ("%d  ",number);
        number+=1;
    }
    printf ("\n");
}

    return 0;
}
---------------------------
Output:
Enter the number of rows:3
1 
2  3 
4  5  6
