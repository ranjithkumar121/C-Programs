#include<stdio.h>
int main()
{
    int n,sum=0,remainder;
    printf("Enter the number:");
    scanf("%d",&n);

    while(n!=0)
    {
        remainder=n%10;
        sum=sum+remainder;
        n=n/10;
    }

    printf("\nSum of digits :%d",sum);
    return 0;
}
