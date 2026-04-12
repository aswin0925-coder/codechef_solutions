#include<stdio.h>
int main()
{
    int T; // Number of test cases
    scanf("%d", &T);
    for(int i=0; i<T; i++)
    {
        int X,Y;
        scanf("%d %d", &X, &Y);
       
        
            printf("%d\n",(X*4)+Y);
        
    }
}