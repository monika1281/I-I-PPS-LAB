#include<stdio.h>
void bubble_sort(int ,int[]);
int main(){
	int size;
	printf("enter size of the array");
	scanf("%d",&size);
	int a[size];
	printf("enter array elements");
	int i;
	for(i=0;i<size;i++){
		scanf("%d",&a[i]);
	}
	bubble_sort(size,a);
	return 0;
}
void bubble_sort(int size,int a[size])
{
	int i,j,temp;
	for(i=0;i<size-1;i++)
	{
		for(j=0;j<size-i-1;j++)
		{
			if(a[j]>a[j+1]){
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
		}
	}
	printf("elements after sorting:\n");
	for(i=0;i<size;i++)
	{
		printf("%5d",a[i]);
	}
	return ;
	
}
--------------------------------------------------------
output:-
enter size of the array 5
enter array elements 3 4 65 72 18
elements after sorting:
    3    4   18   65   72
