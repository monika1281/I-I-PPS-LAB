#include<stdio.h>
int fact(int);
int main()
{
int n;
printf("Enter a number");
scanf("%d",&n);
int result;
result=fact(n);
printf("result:%d",result);
return 0;
}
int fact(int n)
{
int result;
if(n==0)
{
result=1;
}
else{
result=n*fact(n-1);
}
return result;
}


