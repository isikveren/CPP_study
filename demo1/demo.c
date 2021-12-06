#include <stdio.h>
#include <string.h>

//#include <iostream>


struct student{
    int num;
    char name[20];
    char sex;
    int age;
    float score;
    char addr[30];
};


int main(){
    struct student stu;    
    struct student *s = &stu;
    s->age = 14;
    printf("%d\n",s->age);
    strcpy(s->name,"liuxunzi");
    printf("%s",s->name);

    return 0;//
}
/**
 * @brief 
 * 
 */