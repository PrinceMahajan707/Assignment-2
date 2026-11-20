#include<stdio.h>
int main()
{
    int n[10],i,even=0,odd=0;
    printf("Enter 10 Numbers");
    for(i=0;i<10;i++)
    {
        scanf("\n%d",&n[i]);
    }
    for(i=0;i<10;i++)
    {
        if(n[i]%2==0)
        {
            even++;
        }
        else{
            odd++;
        }
    }
    printf("\neven Numbers %d",even);
    printf("\nodd Numbers %d",odd);
}