#include<stdio.h>
int main()
{
    int a[10],i,temp,j;
    printf("enter array a");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=8;i++) 
    {
        int min;
        min=i;
        for(j=i;j<=9;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        temp=a[min];
        a[min]=a[i];
        a[i]=temp;
    }
    printf("sorted array is:");
    for(i=0;i<10;i++)
    {
        printf("\n %d ",a[i]);
    }
}