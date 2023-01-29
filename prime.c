#include<stdio.h>
int main(){
int num;
printf("enter the number : ");
scanf("%d",&num);
for(int i=2;i<num;i++){
if(num%i==0){
printf("Not a prime");
break;
}else{
printf("prime number!!");
break;
}
}
return 0;
} 
------------------------------------
output :
enter the number : 5
prime number!!
-------------------------------------
enter the number : 4
Not a prime
