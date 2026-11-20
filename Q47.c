#include<stdio.h>
int main()
{
    int a[10],b[10],sum[10];int i;
    printf("Enter elements of a ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter elements of b ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<10;i++)
    {
        sum[i]=a[i]+b[i];
    }
     for(i=0;i<10;i++)
    {
        printf("\n%d",sum[i]);
    }
}