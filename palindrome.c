#include <stdio.h>
int main(){
int n,rev=0,sum=0,r,num;
printf("enter the number");
scanf("%d",&num);
n=num;
while(n>0){
r=n%10;
sum=sum+r;
rev=(rev*10)+r;
printf("\nrev %d",rev);
n=n/10;
}
if(num==rev){
printf("\nit is palindrome");
}else{
printf("\nit is not palindrome");
}
printf("\nthe sum of the digits is %d",sum);
return 0;
}
----------------------------------------------
output :
enter the number134

rev 4
rev 43
rev 431
it is not palindrome
-------------------------------------------------
enter the number 121

rev 1
rev 12
rev 121
it is palindrome
the sum of the digits is 4
