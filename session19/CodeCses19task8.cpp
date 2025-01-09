#include <stdio.h>
#include <string.h>

typedef struct Student
{
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
} Student;

void printStudents(Student students[], int currentLength)
{
    for (int i = 0; i < currentLength; i++)
    {
        printf("ID: %d, Ho va ten: %s, Tuoi: %d, So dien thoai: %s\n",
               students[i].id, students[i].name, students[i].age, students[i].phoneNumber);
    }
}

void sortStudentsByName(Student students[], int currentLength)
{
    for (int i = 0; i < currentLength; i++)
    {
        for (int j = i + 1; j < currentLength; j++)
        {
            if (strcmp(students[i].name, students[j].name) > 0)
            {
                Student temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }
}
int main()
{
    Student students[5] = {
        {1, "Le Huu Nhat Hao", 18, "0123456789"},
        {2, "Duong Gia Huy", 18, "0987654321"},
        {3, "Nguyen Cong Tru", 21, "014851585"},
        {4, "Dao Trong Tri", 18, "09246545875"},
        {5, "Ngyen Van D", 24, "0524888487"}};
    int currentLength = 5;
    printf("Danh sach truoc khi sap xep la:\n");
    printStudents(students, currentLength);
    sortStudentsByName(students, currentLength);
    printf("Danh sach da sap xep la:\n");
    printStudents(students, currentLength);
    return 0;
}