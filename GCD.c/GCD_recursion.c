#include<stdio.h>
int gcd(int, int);
int main(){
int small,large;
printf("Enter two numbers");
scanf("%d%d",&small,&large);
int result;
result=gcd(small,large);
printf("Greatest Common Divisior:%d",result);
return 0;
}
int gcd(int small,int large){
if(small<large)
{
return gcd(large,small);
}
if(large==0)
{
return small;
}
return gcd(large,small%large);
}

