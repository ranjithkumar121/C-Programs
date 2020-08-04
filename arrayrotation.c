#include<stdio.h>

void rotate(int arr[],int n,int d)
{
    int i;
    for(i=0;i<d;i++){
    leftrotatebyone(arr,n);
   }
}

void leftrotatebyone(int arr[],int n)
{
    int temp=arr[0];
    int i;
    for(i=0;i<n;i++)
    {
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
}


int main()
{
    int arr[7]={1,2,3,4,5,6,7};
    rotate(arr,7,2);
    int i;
    for(i=0;i<7;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;

}

