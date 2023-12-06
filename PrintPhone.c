#include <stdio.h>

int GetMax(int i, int e);


int getY(int j);

int main() {
    printf("Name    age    Gender\n");
    printf("---------------------\n");
    printf("Jack    18     man\n");
    printf("I LOST MY PHONE\n");
    int a = 40;
    int c = 50;
    char ch[10] = "hellohell";
    printf("%s\n", ch);
    int b = 0;
    int e = 0;
    scanf("%d %d", &b, &e);
    int max=GetMax(b,e);
    printf("%d",max);
    int j=0;
    scanf("%d",&j);
    int y=getY(j);
    printf("%d",y);


}

int getY(int x) {
    if(x>0){
        return -1;
    }
    else if(x==0){
        return 0;
    }
    else if(x<-10000){
        return 99;
    }
    else if(x>10000){
        return 99;
    }
    else{
        return 1;
    }
}



int GetMax(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}


