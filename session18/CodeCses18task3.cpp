#include <stdio.h>

typedef struct student
{
    char name[20];
    int age;
    char phoneNumber[12];
}studentInfo;

int main(){
    studentInfo studentList[5];
    for (int i = 0; i < 5; i++)
    {
        printf ("Nhap thong tin sinh vien thu %d.\n", i+1);
        printf ("Nhap ho va ten: ");
        getchar(); // Xóa ký tự newline
        fgets(studentList[i].name, sizeof(studentList[i].name), stdin);
        printf ("Nhap vao tuoi sinh vien: ");
        scanf("%d", &studentList[i].age);
        printf ("Nhap vao so dien thoai sinh vien: ");
        scanf("%s", &studentList[i].phoneNumber);
    }
    printf ("Thong tin cac sinh vien vua nhap: \n");
    for (int i = 0; i < 5; i++)
    {
        printf ("Sinh vien thu %d\n.", i+1);
        printf ("Ho va ten: %s\n", studentList[i].name);
        printf ("Tuoi sinh vien: %d\n", studentList[i].age);
        printf ("So dien thoai sinh vien: %s\n", studentList[i].phoneNumber);
    }
    
    return 0;
}