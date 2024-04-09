#include <stdio.h>
#include <stdbool.h>
bool prime(int n){
    bool prime=true;
    int i;
    if (n <= 1) {
        return false; 
    }
    i=2;
    while(i<= n/2  && prime==true){
        if(n%i==0){
            prime=false;
        }
    i++;
    }
    return prime;
}
int main()
{
    int n,i,N;
    printf("donner un entier:\n");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++){
        if(n%i==0 && prime(i)){
            N=n;
            while(N%i==0 && prime(i)){
        
            printf("%d ",i);
            N=N/i;
            }
        }
    }

    return 0;
}

