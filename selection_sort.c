#include<stdio.h>
void selection_sort(int,int[]);
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
	selection_sort(size,a);
	
	return 0;
}
void selection_sort(int size,int a[size]){
	int i,j,min,temp;
	for(i=0;i<size-1;i++){
		min=i;
		for(j=i+1;j<size;j++){
			if(a[j]<a[min])
			{ min=j;
			}
		}
		temp=a[i];
		a[i]=a[min];
		a[min]=temp;
	}
	printf("elements after sorting:");
	for(i=0;i<size;i++)
	{
		printf("%5d",a[i]);
	}
	
}
