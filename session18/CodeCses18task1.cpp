#include <stdio.h>

typedef struct student
{
    char name[20];
    int age;
    char phoneNumber[12];
}studentInfo;

int main(){
    studentInfo student_1 ={ "Le Huu Nhat Hao", 18, "0327888099"};
    printf (" Ten cua sinh vien la %s, %d tuoi, sdt: %s\n", student_1.name, student_1.age, student_1.phoneNumber);
    return 0;
}