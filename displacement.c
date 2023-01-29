#include <stdio.h>
#include<math.h>
int main() 
{
    int u=0, s=0, a=9.8;
    int i;
    float t=0;
    for(i=1,s=3;i<=10,s<=30;s=s+3,i++)
    {
        t=u+sqrt(u*u+2*a*s);
        printf (" for %d floor the displacement is%d and time is %f\n",i,s,t);
    }
return 0;
}
----------------------------------------------
for 1 floor the displacement is3 and time is 7.348469
for 2 floor the displacement is6 and time is 10.392304
for 3 floor the displacement is9 and time is 12.727922
for 4 floor the displacement is12 and time is 14.696939
for 5 floor the displacement is15 and time is 16.431677
for 6 floor the displacement is18 and time is 18.000000
for 7 floor the displacement is21 and time is 19.442223
for 8 floor the displacement is24 and time is 20.784609
for 9 floor the displacement is27 and time is 22.045408
for 10 floor the displacement is30 and time is 23.237900
