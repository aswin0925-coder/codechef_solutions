#include<stdio.h>
int main(){
    int T; //no of test cases
    scanf("%d", &T);
    int X,Y;
    int i;

    for (i=0 ; i<T ; i++){
        scanf("%d %d", &X, &Y);
        printf("%d\n",(X*Y)/100);
    } 
}