#include <stdlib.h>
#include <time.h>

#include "stdio.h"

void menu(){

    printf("1. Start game\n");
    printf("0. Exit\n");


}
void game(){
    int guess=0;

    int rent=rand()%100+1;
    printf("guess a number between 1 and 100\n");
    while(1){
        scanf("%d",&guess);
        if(guess>rent){
            printf("guess is bigger\n");
        }
        else if(guess<rent){
            printf("guess is smaller\n");
        }
        else{
            printf("guess is right\n");
            break;
        }
    }
}
int main(){
    int input=0;
    srand((unsigned int)time(NULL));

    do {
        menu();
        scanf("%d", &input);
        switch (input) {
            case 1:
                game();
                break;
            case 0:
                printf("Game exited\n");
                break;
            default:
                printf("Invalid input\n");
                break;
        }
    }

    while (input);
        return 0;
}