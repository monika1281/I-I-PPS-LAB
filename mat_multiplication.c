#include<stdio.h>
void multiply_mat(int size,int a[size][size],int b[size][size] );
int main(){
	int size;
	printf("Enter size of the square Matrix:");
	scanf("%d",&size);
	int a[size][size];
	printf("Enter the elements of matrix A:");
	int i,j;
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
		 scanf("%d",&a[i][j]);	
		}
	}
	int b[size][size];
	printf("Enter the elements of matrix B:");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	multiply_mat( size,a,b);
	return 0;	
}
void multiply_mat(int size,int a[size][size],int b[size][size] )
{
	int i,j,k;
	int result[size][size];
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
		result[i][j]=0;
		for(k=0;k<size;k++)
		{
		 result[i][j]+=a[i][k]*b[k][j];	
		}
	   }
			
	}
	printf("The product of two matrices is:\n");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("%d\t",result[i][j]);
		}
		printf("\n");
	}
	return ;
	
}
----------------------------------------------------
output:-
Enter size of the square Matrix:2
Enter the elements of matrix A: 1 2 3 4
Enter the elements of matrix B: 3 4 5 6
The product of two matrices is:
13      16
29      36
