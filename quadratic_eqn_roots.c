#include <stdio.h>
#include<math.h>
int main() {
    int a, b, c, d;
    int root1, root2;
    printf("enter a b and c values");
    scanf("%d%d%d",&a,&b,&c);
    d=b*b-4*a*c;
    if(d>0)
    {
        root1=(-b+sqrt(d))/(2*a);
        root2=(-b-sqrt(d))/(2*a);
        printf("%d %d\n",root1,root2);
        printf("Roots are real\n");
    }
    else if(d=0)
        {
            root1=-b/(2*a);
            root2=-b/(2*a);
         printf(" roots are %d %d",root1,root2);
          printf("roots are equal\n"); 
        }
        else
    {
       printf("roots are imaginary\n");
    }
return 0;
}
--------------------------------------------------
enter a b and c values 1 -4 3
3 1
Roots are real
