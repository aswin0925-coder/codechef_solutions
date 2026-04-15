#include<stdio.h>
int main()
{
    int N; //no of trops
    scanf("%d", &N);
    int t[N]; //number oif weapons in each troop
    int c = 0; //even trrops
    
    for(int i=0; i<N; i++){
        scanf("%d", &t[i]);
            if (t[i] % 2 == 0){
                c++;
            }
           
    }
     if (c > (N-c)){
                printf("READY FOR BATTLE\n");
            }
            else{
                printf("NOT READY\n");
            } 
}