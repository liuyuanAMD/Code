#include"stdio.h"
int Add(int x,int y){
    return x+y;
}
void calc(int (*pf)(int x,int y)){
    int a=3;
    int b=5;
    int ret=pf(a,b);
    printf("%d",ret);


}
int main() {
    calc(Add);
    int (*pf)(int x, int y) =&Add;
    int ret = (*pf)(3, 5);
    //int ret=pf(3,5);
    printf("%d", ret);
    return 0;
}