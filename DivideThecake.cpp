//divide the cake
#include<stdio.h>
int main()
{
int t;
scanf("%d",&t);
    while(t--)
    {
    int n;
    scanf("%d",&n);
    if(n>360)
    {
    printf("n n n\n");
    }
    else
    {
        if(360%n==0)
        {
        printf("y y");
        }
        else
        {
        printf("n y");
        }
        if(n<27)
        {
        printf(" y\n");
        }
        else
        {
        printf(" n\n");
        }
    }
    }
return 0;
}