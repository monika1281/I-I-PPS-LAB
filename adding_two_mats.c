#include<stdio.h>
int n;
void sum(int[n][n],int[n][n],int n);
int main(){
printf("enter size of a square matrix : ");
scanf("%d",&n);
int a[n][n],b[n][n];
printf("enter the elements : ");
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
scanf("%d",&a[i][j]);
}
}
printf("enter the elements : ");
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
scanf("%d",&b[i][j]);
}
}
sum(a,b,n);
return 0;
}
void sum(int a[][n],int b[][n],int n ){
int c[n][n];
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
c[i][j]=a[i][j]+b[i][j];
}
}
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
printf("%5d",c[i][j]);
}
printf("\n");
}
return;
}


# output : 
enter size of a square matrix : 2
enter the elements : 2
2
2
2
enter the elements : 1
1
1
1
    3    3
    3    3
