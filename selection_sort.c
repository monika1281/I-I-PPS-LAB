#include<stdio.h>
void selection_sort(int[],int);
int main(){
    int size;
    int I;
    printf ("enter array size:");
    scanf("%d",&size);
    int a[size];
    printf ("enter array elements:");
    for(I=0;I<size;I++)
    {
        scanf("%d",&a[I]);
    }
    selection_sort (a, size);
    return 0;
}
void selection_sort(int a[],int size){
    int I, j, min, temp;
    for(I=0;I<size-1;I++)
    {    
        min=I;
        for(j=I+1;j<size;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        temp=a[I];
        a[I]=a[min];
        a[min]=temp;
    }
    printf ("elements after sorting:");
    for(I=size-1;I>=0;I--)
    {
        printf("%2d",a[I]);
    }
}
Output:-
enter array size:5
enter array elements:2 4 1 6 7
elements after sorting: 7 6 4 2 1
