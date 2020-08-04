#include<stdio.h>

int main(void)
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int x=20;
    int n=sizeof(arr)/sizeof(arr[0]);
    int result=Bsearch(arr,0,n-1,x);
    if(result==-1)
        printf("Element not found");
    else
        printf("Element found at index %d",result);
    return 0;
}

int Bsearch(int arr[],int l,int r,int x)
{
    if(r>=1){
        int mid=l+(r-l)/2;

        if(arr[mid]==x)
            return mid;
        if(arr[mid]>x)
            return Bsearch(arr,l,mid-1,x);
        else
            return Bsearch(arr,mid+1,r,x);
    }
    return -1;
}
