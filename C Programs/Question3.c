#include <stdio.h>

int main()
{
    int a[4],sum=0,i;
    printf("Enter 4 numbers : ");
    for(i=0;i<4;i++)
    { 
        scanf("%d",&a[i]);
        sum +=a[i];
    
    }
    printf("Sum of all numbers is %d",sum);
    return 0;
}