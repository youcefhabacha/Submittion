#include"stdio.h"
#include"string.h"
int main(){
    char s[5];
    int f=0;
    printf("give me string:\n");
    scanf("%s",s);
    for(int i=0;i<strlen(s);i++){
        if(s[i]!='a'&& s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u'){
            f=f+s[i];
        }
    }
    printf("%d",f);
}
