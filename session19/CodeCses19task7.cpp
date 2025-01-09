// Em có việc nên chưa kịp làm bài 8, bài 9 nên em up bài 7 đã làm từ trước, tối em update 2 bài kia lên sau nha thầy=D
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

void deleteStudent(int studentID, Student students[], int *currentLength)
{
    int found = 0;
    for (int i = 0; i < *currentLength; i++)
    {
        if (students[i].id == studentID)
        {
            found = 1;
            for (int j = i; j < *currentLength - 1; j++)
            {
                students[j] = students[j + 1];
            }
            (*currentLength)--;
            break;
        }
    }

    if (found)
    {
        printf("Da xoa sinh vien mang so ID %d.\n", studentID);
    }
    else
    {
        printf("Khong tim thay sinh vien mang so ID %d.\n", studentID);
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

    printf("Danh sach truoc khi xoa:\n");
    printStudents(students, currentLength);
    int studentToDelete = 3;
    printf("Xoa sinh vien mang so ID %d\n", studentToDelete);
    deleteStudent(studentToDelete, students, &currentLength);
    printf("Danh sach sau khi xoa:\n");
    printStudents(students, currentLength);
    return 0;
}
