#include "stdio.h"
  int footstep(int n) {
    if (n == 1) {
        return 1;
    }
    if (n == 2) {
        return 2;
    }
    else
    return footstep(n - 1) + (footstep(n - 2));

}
int main(){
    int n=0;
    scanf("%d",&n);
    int count=footstep(n);
    printf("%d\n",count);
    return 0;
}