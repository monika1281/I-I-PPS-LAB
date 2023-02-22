#include<stdio.h>
void swap(int,int);
int main()
{
	int a=20, b=30;
	printf("Before swapping the values of number1 and number2 are %d%4d",a,b);
	swap(a,b);
	printf("\nAfter calling the function,the values of number1 and number2 are %d%4d",a,b);
	return 0;
}
void swap(int num1,int num2)
{
	int temp;
	temp=num1;
	num1=num2;
	num2=temp;
	printf("\nInside the function,the values of num1 and num2 are %d%5d",num1,num2);
	return ;
}
---------------------------------------------
output:-
Before swapping the values of number1 and number2 are 20  30
Inside the function,the values of num1 and num2 are 30   20
After calling the function,the values of number1 and number2 are 20  30
--------------------------------
