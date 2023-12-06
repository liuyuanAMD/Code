#include"stdio.h"
int main(){
    char ch=0;
    while(scanf("%c",&ch)==1){
        if(ch>='A'&& ch<='Z'){
            printf("%c\nis zimu",ch);
        }
        else if(ch>='a' && ch<='z'){
            printf("%c\nis zimu",ch);
        }
        else{
            printf("%c\nis not zimu",ch);
        }
        getchar();
    }
    return 0;
}