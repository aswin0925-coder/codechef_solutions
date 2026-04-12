#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    int i;
    int b1,b2,b3;
    for (i=0;i<T;i++){
        scanf("%d %d %d",&b1,&b2,&b3);
        if(b1+b2+b3 <= 1)
        printf("Water filling time\n");
        else
        printf("Not now\n");
    }

}