#include <stdio.h>
#include<math.h>
int main() {
	int i,j;
	int k=1;
	float sum=1.0;
	int x;
	printf("enter x value\n");
	scanf("%d",&x);
	for(i=1,j=2;i<=3;i=i+1,j=j+2)
	{
		k=-1*k;
		sum=sum+(k*pow(x,i)/j);	
	}
	printf("sum is %f",sum);
    return 0;
   }
------------------------------------
 output:
enter x value 4
sum is -7.666667
