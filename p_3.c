#include<stdio.h>
int main()
{
    int T; // Number of test cases
    scanf("%d", &T);
    int i;
    for(int i=0; i<T; i++){
        int X;
        scanf("%d", &X);
        if(X <= 7){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }

}