#include<stdio.h>
int add_digits(int);
int main()
{

    int n,result;
    printf("Enter the number:");
    scanf("%d",&n);
    result=add_digits(n);

    printf("Sum of digits : %d",result);
    return 0;
}


int add_digits(int n)
{
    int sum;
    if(n==0){
        return 0;
    }
    sum=n%10+add_digits(n/10);
    return sum;
}
