#include "string.h"
#include "stdio.h"
int main(){
    char passwd[20]={0};
    int i=1;
    for( i=1;i<=3;i++){
        printf("ÇëÊäÈëÃÜÂë£º");
        scanf("%s",passwd);
        if(strcmp(passwd,"123456")==0){
            printf("ÃÜÂëÕýÈ·£¬µÇÂ¼³É¹¦£¡\n");
            break;
        }
        else{
            printf("ÃÜÂë´íÎó£¬µÇÂ¼Ê§°Ü£¡\n");
        }
    }
    if(i=3){
        printf("Èý´ÎÃÜÂë¾ù´íÎó£¬ÍË³ö³ÌÐò£¡\n");
    }
}