#include"stdio.h"
#include"string.h"
int main(){
    char arr[101]={0};
    gets(arr);
    int line=strlen(arr);
    int t=line;
  int i =0;
  int j=0;
  for(i=line-1;i>=0;i--){
      if(arr[i]==' '){
          for(j=i+1;j<t;j++){
              printf("%c",arr[j]);
          }
            printf(" ");
               t=i;
      }
  }
  for(j=0;j<t;j++){
      printf("%c",arr[j]);
  }
    return 0;
}