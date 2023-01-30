#include<stdio.h>
void main(){
	int i,n,*ptr;
	printf("Enter size of the array:");
	scanf("%d",&n);
	int a[n];
	printf("Enter the values of the array:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	ptr=&a[n-1];
	printf("The  reverse values of the array using pointers are:\n");
	for(i=n-1;i>=0;i--){
		printf("%5d",*ptr);
		ptr=ptr-1;
	}
	return ;
	
}
---------------------------------------------------
output:
Enter size of the array: 3
Enter the values of the array: 1 2 3
The  reverse values of the array using pointers are:
    3    2    1
