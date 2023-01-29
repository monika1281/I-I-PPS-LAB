#include <stdio.h>
int main(){
int a,b;
float c,d;
printf("enter the values of a and b");
scanf("%d%d",&a,&b);
c=a/b;
printf("%f\n",c);
d=(float)a/b;
printf("%f",d);
return 0;
}
--------------------------
output:
enter the values of a and b
6 4
1.000000
1.500000
