#include <stdio.h>
#include<stdbool.h>
bool isPalindrome(int n){
    int r,s=0,x=n;
    if(n<0){
        return false;
    }
    else{
        while(n>0){
            r=n%10;
            s=s*10+r;
            n=n/10;
         }
    }
    return s==x;
}
int main(){
    int n,p;
    printf("input:\n");
    scanf("%d",&n);
    if(isPalindrome(n))
        printf("Output:true\n");
    else
        printf("Output:false");
    
}
