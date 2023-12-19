#include"stdio.h"
#include"assert.h"
#include"string.h"
void* my_memmove(void* dest, const void* src,size_t num){
    assert(dest&&src);
    void* ret=dest;
    if(dest<src){
        while(num--){
            *(char*)dest=*(char*)src;
            dest=(char*)dest+1;
            src=(char*)src+1;
        }
    }
    else{
        while(num--){
            *((char*)dest+num)=*((char*)src+num);
        }
    }
    return ret;


}
void test(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    my_memmove(arr+2,arr,20);
  int i=0;
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i){
        printf("%d ",arr[i]);
    }
}
int main(){
test();



    return 0;
}