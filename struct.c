#include"stdio.h"
#include"string.h"
struct Stu
{
    char name[20];
    int age;
    int score;
};

void set_stu(struct Stu* ps){
    (*ps).age=20;
    (*ps).score=100;
    strcpy((*ps).name,"zhangsan");
    // -> 代替(*ps).

}
void print_stu(struct Stu* ss){
    printf("%s %d %d\n",(*ss).name,(*ss).age,(*ss).score);
}
int main(){
    struct Stu s1={0};
    set_stu(&s1);
    print_stu(&s1);


    return 0;
}