#include<stdio.h>
int main()
{
    int a[5],b[5],temp;
    printf("Enter array a ");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter array b ");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&b[i]);
    }
    for(int i=0;i<5;i++)
    {
        temp=a[i];
        a[i]=b[i];
        b[i]=temp;
    }
    printf("\narray a ");
    for(int i=0;i<5;i++)
    {
        printf("\n%d",a[i]);
    }
    printf("\narray b ");
    for(int i=0;i<5;i++)
    {
        printf("\n%d",b[i]);
    }
}