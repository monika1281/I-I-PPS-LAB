#include<stdio.h>
int main(){
int num;
printf("enter the number : ");
scanf("%d",&num);
for(int i=2;i<num;i++){
if(num%i==0){
break;
}else{
printf("prime number!!");
}
}
return 0;
} 
------------------------------------
output :
enter the number : 5
prime number!!
