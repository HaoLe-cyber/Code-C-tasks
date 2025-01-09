#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Student
{
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
} Student;
// Hàm hiển thị danh sách sinh viên đang quản lý
void printStudents(Student students[], int *currentLength)
{
    if (*currentLength == 0)
    {
        printf("\t|-- -- -- -- -- -Danh sach trong-- -- -- -- -|\n ");
    }

    for (int i = 0; i < *currentLength; i++)
    {
        printf("ID: %d| Ho va ten: %s, Tuoi: %d, So dien thoai: %s\n",
               students[i].id, students[i].name, students[i].age, students[i].phoneNumber);
    }
}
// Hàm thêm sinh viên mới vào danh sách
void addNewStudent(Student students[], int *currentLength, int maxSize)
{
    int idToAdd, ageToAdd;
    char nameToAdd[20], phoneNumberToAdd[15];
    if (*currentLength >= maxSize)
    {
        printf("Khong the them sinh vien vi danh sach da day!\n");
    }
    printf("Nhap vao ID cua sinh vien moi: ");
    scanf("%d", &idToAdd);
    printf("Nhap vao ho va ten cua sinh vien moi: ");
    getchar();
    fgets(nameToAdd, sizeof(nameToAdd), stdin);
    nameToAdd[strcspn(nameToAdd, "\n")] = '\0';
    printf("Nhap vao so tuoi cua sinh vien moi: ");
    scanf("%d", &ageToAdd);
    printf("Nhap vao so dien thoai cua sinh vien moi: ");
    scanf("%s", &phoneNumberToAdd);
    students[*currentLength].id = idToAdd;
    strcpy(students[*currentLength].name, nameToAdd);
    students[*currentLength].age = ageToAdd;
    strcpy(students[*currentLength].phoneNumber, phoneNumberToAdd);
    (*currentLength)++;
    printf("Sinh vien da duoc them!\n");
}
// Hàm sửa thông tin sinh viên
void changeStudentInformation(Student students[], int *currentLength)
{
    int id, ageToChange;
    char nameToChange[20], phoneNumberToChange[15];
    printf("Nhap vao ID cua sinh vien muon sua thong tin: ");
    scanf("%d", &id);
    printf("Nhap vao ho va ten moi: ");
    getchar();
    fgets(nameToChange, sizeof(nameToChange), stdin);
    nameToChange[strcspn(nameToChange, "\n")] = '\0';
    printf("Nhap vao so tuoi moi: ");
    scanf("%d", &ageToChange);
    printf("Nhap vao so dien thoai moi: ");
    scanf("%s", &phoneNumberToChange);
    int found = 0;
    for (int i = 0; i < *currentLength; i++)
    {
        if (students[i].id == id)
        {
            strcpy(students[i].name, nameToChange);
            students[i].age = ageToChange;
            strcpy(students[i].phoneNumber, phoneNumberToChange);
        }
        found = 1;
    }
    if (!found)
    {
        printf("Khong tim thay sinh vien mang so ID %d", id);
    }
}
// Hàm xóa sinh viên
void deleteStudent(Student students[], int *currentLength)
{
    int idToDelete;
    printf("Nhap vao ID cua sinh vien muon xoa: ");
    scanf("%d", &idToDelete);
    int found = 0;
    for (int i = 0; i < *currentLength; i++)
    {
        if (students[i].id == idToDelete)
        {
            for (int j = i; j < *currentLength - 1; j++)
            {
                students[j] = students[j + 1];
            }
            found = 1;
            (*currentLength)--;
        }
    }
    if (!found)
    {
        printf("Khong tim thay sinh vien mang so ID can xoa!\n");
    }
}
// Hàm tìm kiếm sinh viên
void searchStudent(Student students[], int *currentLength)
{
    int idToSearch;
    printf("Nhap vao ID cua sinh vien can tim: ");
    scanf("%d", &idToSearch);
    int found = 0;
    for (int i = 0; i < *currentLength; i++)
    {
        if (students[i].id == idToSearch)
        {
            found = 1;
            printf("Thong tin cua sinh vien ban dang tim la:\n");
            printf("ID: %d, Ho va ten: %s, Tuoi: %d, So dien thoai: %s\n",
                   students[i].id, students[i].name, students[i].age, students[i].phoneNumber);
            printf("\n");
        }
    }
    if (!found)
    {
        printf("Khong tim thay sinh vien mang so ID %d\n", idToSearch);
    }
}
// Hàm sắp xếp danh sách sinh viên theo tên
void sortStudentsByName(Student students[], int *currentLength)
{
    for (int i = 0; i < *currentLength; i++)
    {
        for (int j = i + 1; j < *currentLength; j++)
        {
            if (strcmp(students[i].name, students[j].name) > 0)
            {
                Student temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }
    printf("Danh sach da duoc sap xep!\n");
}

int main()
{
    int maxSize, currentLength = 0, choice;
    printf("Vui long nhap vao kich co toi da cua danh sach: ");
    scanf("%d", &maxSize);
    Student students[maxSize];
    do
    {
        printf("\t|--------------------MENU--------------------|\n");
        printf("\t|1. Hien thi danh sach sinh vien.            |\n");
        printf("\t|2. Them sinh vien.                          |\n");
        printf("\t|3. Sua thong tin sinh vien.                 |\n");
        printf("\t|4. Xoa sinh vien.                           |\n");
        printf("\t|5. Tim kiem sinh vien.                      |\n");
        printf("\t|6. Sap xep danh sach sinh vien.             |\n");
        printf("\t|7. Thoat.                                   |\n");
        printf("\t|--------------------------------------------|\n");
        printf("\n");
        printf("[Lua chon cua ban]: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printStudents(students, &currentLength);
            break;
        case 2:
            addNewStudent(students, &currentLength, maxSize);
            break;
        case 3:
            changeStudentInformation(students, &currentLength);
            break;
        case 4:
            deleteStudent(students, &currentLength);
            break;
        case 5:
            searchStudent(students, &currentLength);
            break;
        case 6:
            sortStudentsByName(students, &currentLength);
            break;
        case 7:
            printf("Thoat chuong trinh!\n");
            break;
        default:
            printf("Vui long nhap dung lua chon (1-7)!!\n");
            break;
        }
    } while (choice != 7);

    return 0;
}