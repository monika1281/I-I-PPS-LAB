#include<stdio.h>
int GCD(int,int);
int main(){
int small,large;
printf("Enter two numbers");
scanf("%d%d",&small,&large);
int result;
result=GCD(small,large);
printf("Greatest Common Divisior:%d",result);
return 0;
}
int GCD(int small,int large){
while((large%small)!=0){
int temp;
temp=large%small;
large=small;
small=temp;
}
return small;
}

