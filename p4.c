#include<stdio.h>
int main()
{
    int T; // Number of test cases
    scanf("%d", &T);
    int X,Y,Z;
    for(int i=0; i<T; i++){
     scanf("%d %d %d", &X, &Y, &Z);
     if (2*Z > X*Y)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}