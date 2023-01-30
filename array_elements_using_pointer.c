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
	ptr=&a;
	printf("The values of the array using pointers are:\n");
	for(i=0;i<n;i++){
		printf("%5d",*ptr);
		ptr=ptr+1;
	}
	return ;
	
}
-----------------------------------------
output:
Enter size of the array: 4
Enter the values of the array: 1 2 3 4
The values of the array using pointers are:
    1    2    3    4
