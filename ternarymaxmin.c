#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the values of a b and c\n");
	scanf("%d%d%d",&a,&b,&c);
	printf("max:%d\n",a>b?(a>c?a:c):(b>c?b:c));
	printf("min:%d\n",a<b?(a<c?a:c):(b<c?b:c));
	return 0;
}
-----------------------------------
output:
Enter the values of a b and c
6 5 7
max:7
min:5
