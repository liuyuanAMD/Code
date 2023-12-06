#include"stdio.h"
void sort_number(int a,int b,int c) {
    printf("%d%d%d\n",a,b,c);
    int temp=0;
    if(a<b){
        temp=a;
        a=b;
        b=temp;
    }
    if(a<c){
        temp=a;
        a=c;
        c=temp;
    }
    if(b<c){
        temp=b;
        b=c;
        c=temp;
    }
    printf("%d%d%d\n",a,b,c);


}

int main(){
    sort_number(1,4,9);

    return 0;
}