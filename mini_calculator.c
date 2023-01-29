#include<stdio.h>
void main(){
	int choice;
	float a,b;
	printf("Enter the values of a and b\n");
	scanf("%f%f",&a,&b);
	printf("enter 1 for division 2 for subtraction 3 for multiplication 4 for division 5 for mod\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("sum is %f",a+b);
			break;
		case 2:
			printf("subtraction is %f",a-b);
			break;		
		case 3:
			printf("multiplication is %f",a*b);
			break;	
		case 4:
			printf("Division is %f",a/b);
			break;	
		case 5:
			printf("Reminder is %d",(int)a%(int)b);
			break;	
	}
	return 0;
}
----------------------------------------------------
output:
Enter the values of a and b
4 5
enter 1 for division 2 for subtraction 3 for multiplication 4 for division 5 for mod
Remainder is 4
