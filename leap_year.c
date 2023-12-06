#include "stdio.h"
#include "math.h"
int is_leap_year(int year){
    if((year%4==0&&year%100!=0)||year%400==0){
        return 1;
    }
    else{
        return 0;
    }

}
int main(){
    int input=0;
    scanf("%d",&input);
    if(is_leap_year(input)){
        printf("是闰年");
    }
    else{
        printf("不是闰年");
    }
}