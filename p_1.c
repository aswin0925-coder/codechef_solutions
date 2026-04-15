#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a , b , c;
    int i;
    for(i=0;i<n;i++)
    {    
           scanf("%d %d %d",&a,&b,&c); 
            int sum = a+b;
    int pr = 2*c;
        if(sum > pr)
        {
            printf("yes");
        }
        else
        {
            printf("no");
        }
    }
}