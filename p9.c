#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    int i;
    int X;
    for(i=0;i<T;i++)
    {
        scanf("%d",&X);
        if(X<=100)
        {
            printf("%d\n",X);
        }
        else if(X>100 && X<=1000)
        {
            printf("%d\n",X-25);
        }
        else if(X>1000 && X<=5000)
        {
            printf("%d\n",X-100);
        }
        else if(X>5000)
        {
            printf("%d\n",X-500);
        }
    }
}