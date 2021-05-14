#include<stdio.h>
int main()
{

FILE *fp=fopen("b.txt","w");


struct student
{
    char name[10];
    int roll;
    float marks;
};

struct student student_1 ={"Tina", 12, 88.123};

fwrite(&student_1, sizeof(student_1), 1, fp);


}
