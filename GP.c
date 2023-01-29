#include <stdio.h>
#include<math.h>
int main() {
	int sum=1;
	int x,n;
	int i;
	printf("enter x value:");
	scanf("%d",&x);
	printf("enter n value which is the highest power of the series:");
	scanf("%d",&n);
	for(i=1;i<=n;i=i+1){
		sum=sum+pow(x,i);
	}
	printf("Geometric Progression sum is %d",sum);
	return 0;
}
---------------------------------
output:
enter x value: 5
enter n value which is the highest power of the series:3
Geometric Progression sum is 156
