#include"stdio.h"
    int is_leap_year(int y) {
        return ((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0);
        }
//int main(){
//    int year=0;
//    int mounth=0;
//    scanf("%d %d",&year,&mounth);
//
//        if(mounth==1||mounth==3||mounth==5||mounth==7||mounth==8||mounth==10||mounth==12){
//            printf("31");
//        }
//        else if(mounth==4||mounth==6||mounth==9||mounth==11){
//            printf("30");
//        }
//        if(mounth==2){
//            if(is_leap_year(year)){
//                printf("29");
//            }
//            else{
//                printf("28");
//            }
//        }
//        return 0;
//    }
//    int main() {
//        int y = 0;
//        int m = 0;
//        int d = 0;
//        int days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
//        while (scanf("%d %d", &y, &m) == 2) {
//            int d = days[m];
//            if ((is_leap_year(y)==1) && m == 2) {
//                d++;
//            }
//            printf("%d\n", d);
//        }
//
//    }
//
//}
////int main(){
//    int year=0;
//    int mounth=0;
//    scanf("%d %d",&year,&mounth);
//
//        if(mounth==1||mounth==3||mounth==5||mounth==7||mounth==8||mounth==10||mounth==12){
//            printf("31");
//        }
//        else if(mounth==4||mounth==6||mounth==9||mounth==11){
//            printf("30");
//        }
//        if(mounth==2){
//            if(is_leap_year(year)){
//                printf("29");
//            }
//            else{
//                printf("28");
//            }
//        }
//        return 0;
//    }
    int main() {
        int y = 0;
        int m = 0;
        int d = 0;
        int days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        while (scanf("%d %d", &y, &m) == 2) {
            int d = days[m];
            if ((is_leap_year(y)==1) && m == 2) {
                d++;
            }
            printf("%d\n", d);
        }

    }
