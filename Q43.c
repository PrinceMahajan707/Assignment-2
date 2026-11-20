#include<stdio.h>
int main()
{
    int n[10],sum,i;
    sum=0;
    printf("Enter 10 Numbers");
    for(i=0;i<10;i++)
    {
        scanf("\n%d",&n[i]);
    }
    for(i=0;i<10;i++)
    {
        sum = sum +n[i];
    }
    printf("Sum of All 10 Numbers %d",sum);
}