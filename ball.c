#include"stdio.h"
int main(){
    //计算一个球体的体积；
    double r=0;
    double v=0;
    scanf("%lf",&r);
    v=4.0/3*3.14*r*r*r;
    printf("%.2lf\n",v);

}