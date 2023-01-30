#include<stdio.h>
void main(){
	int i,n,*ptr;
	int sum=0;
	printf("Enter size of the array:");
	scanf("%d",&n);
	int a[n];
	printf("Enter the values of the array:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	ptr=&a[0];
	for(i=0;i<n;i++){
        sum=sum+*ptr;
		ptr=ptr+1;
	}
	printf("sum of array elements using pointers is %d",sum);
	return ;
	
}
--------------------------------------------------------------
output:
Enter size of the array: 5
Enter the values of the array: 1 2 3 4 5
sum of array elements using pointers is 15
