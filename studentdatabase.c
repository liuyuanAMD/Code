#include"stdio.h"
int main(){
    int StUId=0;
    float c=0;
    float math=0;
    float english=0;
    scanf("%d%f%f%f",&StUId,&c,&math,&english);
    printf("The each subject score of  No. %d is %.2f, %.2f, %.2f.\n",StUId,c,math,english);

}