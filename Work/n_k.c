#include"stdio.h"
double n_k(int n,int k) {
    if (k > 0) {
        return n * n_k(n, k - 1);
    } else if (k == 0) {
        return 1;
    } else {
        return 1 / n_k(n, -k);
    }
}
int main(){
    int n=0;
    int k=0;
    scanf("%d %d",&n,&k);
    double ret=n_k(n,k);
    printf("%lf\n",ret);

    return 0;
}