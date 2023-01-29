#include<stdio.h>
void main()
{
int a,b;
printf("Enter the values of a and b\n");
scanf("%d%d",&a,&b);
printf("Addition is %d\n",a+b);
printf("Subtraction is %d\n",a-b);
printf("multiplication is %d\n",a*b);
printf("division is %d\n",a/b);
printf("mod is %d\n",a%b);
printf("Relational operators\n");
printf("a is greater than or equal to b is %d\n",a>=b);
printf("a is less than or equal to b is %d\n",a<=b);
printf("a is not equal to b is %d\n",a!=b);
printf("Logical operators\n");
printf("a is not equal to b and greater than b is %d\n",((a!=b)&&(a>b)));
printf("a is less than b or b is less than a is %d\n",((a<b)||(b<a)));
printf("Bitwise operators\n");
printf("bitwise and is %d\n",a&b);
printf("bitwise or is %d\n",a|b);
printf("post increment of a is %d\n",a++);
printf("post decrement of a is %d\n",a--);
printf("left shift of a by 1 is %d\n",a<<1);
printf("Right shift of a by 1 is %d\n",a>>1);

return 0;
}
-------------------------------------------
0utput:
Enter the values of a and b
4 2
Addition is 6
Subtraction is 2
multiplication is 8
division is 2
mod is 0
Relational operators
a is greater than or equal to b is 1
a is less than or equal to b is 0
a is not equal to b is 1
Logical operators
a is not equal to b and greater than b is 1
a is less than b or b is less than a is 1
Bitwise operators
bitwise and is 0
bitwise or is 6
post increment of a is 4
post decrement of a is 5
left shift of a by 1 is 8
Right shift of a by 1 is 2
         
