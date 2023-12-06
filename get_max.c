#include "stdio.h"
int get_max(int x,int y){

    return (x>y?x:y);

}
void Swap(int * px, int * py){
      int temp=0;
     temp = *px;
        *px = *py;
      *py= temp;
}

int main(){
    int numOne=0;
    int numTwo=0;
    scanf("%d%d",&numOne,&numTwo);
    int num=get_max(numOne,numTwo);
    printf("%d\n",num);
    Swap(&numOne,&numTwo);
    printf("x=%dy=%d",numOne,numTwo);
}