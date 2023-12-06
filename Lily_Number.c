#include"stdio.h"
#include"math.h"
int main(){
int i=10000;
for(i=10000;i<100000;i++){
    int sum=0;
    int j=0;

    for(int j=1;j<=4;j++){
        int k=(int)pow(10,j);
       sum+=(i/k)*(i%k);
    }
    if(sum==i){
        printf("%d\n",i);
    }
}

    return 0;
}