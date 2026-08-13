#include<stdio.h>
int main ()
{

    int n,i,sum=0;
    printf("Enter a number : ");
    scanf("%d",&n);

    for(i=0;i<=n;i++)
    {
        sum +=n%10;
        n=n/10;
    }
    printf("Sum of all digits of number is %d",sum);
    return 0;
}
