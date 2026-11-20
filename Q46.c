#include<stdio.h>
int main()
{
    int a[10],i;
    printf("Enter Array Elments ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    int max = a[0];int smax=a[0];
    for(i=0;i<10;i++)
    {
       if(a[i]>max)
       {
            max=a[i];
       }
    }
    for(i=0;i<10;i++)
    {
       if(a[i]>smax && a[i]!=max)
       {
            smax=a[i];
       }
    }
    printf("Maximum element is %d\n", max);
    printf("Second maximum element is %d\n", smax);
}