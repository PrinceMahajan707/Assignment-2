#include<stdio.h>
int main()
{
    int n[10],i,pos=0,neg=0,zero=0;
    printf("Enter 10 Numbers");
    for(i=0;i<10;i++)
    {
        scanf("\n%d",&n[i]);
    }
    for(i=0;i<10;i++)
    {
        if(n[i]>0)
        {
            pos++;
        }
        else if(n[i]<0){
            neg++;
        }
        else{
            zero++;
        }
    }
    printf("\nPositive Numbers %d",pos);
    printf("\nNegative Numbers %d",neg);
    printf("\nZero Numbers %d",zero);
}