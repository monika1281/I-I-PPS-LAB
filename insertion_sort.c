#include<stdio.h>
void insertion_sort(int[],int);
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
    insertion_sort (a, size);
    return 0;
}
void insertion_sort(int a[],int size){
    int I, j, key;
    for(I=1;I<size;I++)
    {
        key=a[I];
        j=I-1;
        while(j>=0 && a[j]>key)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=key;
    }
    printf ("elements after sorting:");
    for(I=0;I<size;I++)
    {
        printf ("%2d",a[I]);
    }
    return ;
}
Output:-
enter array size:5
enter array elements: 2 1 7 5 6
elements after sorting: 1 2 5 6 7
