#include<stdio.h>
int main(){
    int T; // Number of test cases
    scanf("%d", &T);
    for(int i=0; i<T; i++){
        int N; //no of friends
        scanf("%d", &N);
        int n;
        n=N/6; //number of subscriptions needed
        if (N%6 != 0){
            n++; //if there are remaining friends, we need one more subscription
        }
        int X; //cost of one subscription
        scanf("%d", &X);
        int total_cost = n * X; //total cost for the subscriptions
        printf("%d\n", total_cost);

    }
    

}