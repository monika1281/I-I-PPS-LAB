#include<stdio.h>
int m;
int n;
void transpose(int a[m][n], int m, int n);
int main(){
int i,j;
printf("enter size of a matrix:");
printf("\nwhere m=row size\n n=column size");
scanf("%d%d",&m,&n);
int a[m][n];
printf("enter matA elements :");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++){
 scanf("%d",&a[i][j]);
 }
 }
 transpose(a,m,n);
 return 0;
 }
 void transpose(int a[m][n],int m,int n){
 int i,j;
 int b[i][j];
 for(i=0;i<m;i++)
 {
 for(j=0;j<n;j++)
 {
  b[i][j]=a[j][i];
 }
 }
 printf("transpose of given mat is\n");
 for(i=0;i<m;i++)
 {
 for(j=0;j<n;j++)
 {
  printf("%5d",b[i][j]);
 }
  printf("\n");
 }
  return ;
  }
----------------------------------------------
Output:
enter size of a matrix:
where m=row size
n=column size 2 2
enter matA elements : 1 2 3 4
transpose of given mat is
    1    3
    2    4

 
