#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[55],arr2[55],arr3[55];
	int i=0,j=0,k=0,l=0;
	int x,x1,x2,x3;
	printf("Enter the string:");
	gets(arr1);
	printf("Enter the substring:");
	gets(arr2);
	printf("Enter the position where substring has to be inseterd:");
	scanf("%d",&k);
	
	j=strlen(arr1);
	x2=strlen(arr2);
	while(i<=j)
	{
		arr3[i]=arr1[i];
		i++;
	}
	x1=x2+j;
	x3=k+x2;
	for(i=k;i<x1;i++)
	{
		x=arr3[i];
		if(l<x2)
		{
			arr1[i]=arr2[l];
			l=l+1;
		}
	    arr1[x3]=x;
	    x3=x3+1;
		
	}
   printf("%s",arr1);
}
---------------------------------------------
output:-
Enter the string:hey micro office
Enter the substring:soft
Enter the position where substring has to be inseterd:9
hey microsoft office
