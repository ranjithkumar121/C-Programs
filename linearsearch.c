#include<stdio.h>

void main()
{
    int arr[]={2,3,4,5,7,10};
    int x=10;
    int n=sizeof(arr);
    int result=search(arr,n,x);
    if(result==-1)
        printf("Element not found");
    else
        printf("Element found at position %d",result);
}

int search(int arr[],int n,int x)
{
    int i;
    for(i=0;i<n;i++)
        if(arr[i]==x)
        return i;
    return -1;
}
