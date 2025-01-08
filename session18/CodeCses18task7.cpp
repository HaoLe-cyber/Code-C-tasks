#include <stdio.h>
#include <string.h>

typedef struct student {
    char name[20];
    int id;
    int age;
    char phoneNumber[12];
} studentInfo;

int main() {
    studentInfo studentList[50] = {
        {"Nguyen Van A", 1, 20, "0123456789"},
        {"Tran Thi B", 2, 21, "0987654321"},
        {"Le Van C", 3, 19, "0345678901"},
        {"Hoang Minh D", 4, 22, "0567890123"},
        {"Pham Quoc E", 5, 20, "0789012345"}
    };

    int studentCount = 5;
    // Hiển thị thông tin ban đầu của tất cả sinh viên
    printf("Thong tin cac sinh vien ban dau:\n");
    for (int i = 0; i < studentCount; i++) {
        printf("ID: %d\n", studentList[i].id);
        printf("Ho va ten: %s\n", studentList[i].name);
        printf("Tuoi: %d\n", studentList[i].age);
        printf("So dien thoai: %s\n\n", studentList[i].phoneNumber);
    }
    // Tính năng xóa sinh viên theo tên
    char nameToDelete[20];
    int found = 0;

    printf("Nhap ten sinh vien can xoa: ");
    getchar();
    fgets(nameToDelete, sizeof(nameToDelete), stdin);
    nameToDelete[strcspn(nameToDelete, "\n")] = '\0'; // Xóa ký tự newline

    // Tìm kiếm sinh viên theo tên
    for (int i = 0; i < studentCount; i++) {
        if (strcmp(studentList[i].name, nameToDelete) == 0) {
            // Sinh viên tìm thấy, xóa sinh viên
            for (int j = i; j < studentCount - 1; j++) {
                studentList[j] = studentList[j + 1];
            }
            studentCount--;
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Sinh vien khong ton tai.\n");
    } else {
        // Hiển thị thông tin các sinh viên còn lại sau khi xóa
        printf("\nThong tin cac sinh vien sau khi xoa:\n");
        for (int i = 0; i < studentCount; i++) {
            printf("Sinh vien ID: %d\n", studentList[i].id);
            printf("Ho va ten: %s\n", studentList[i].name);
            printf("Tuoi: %d\n", studentList[i].age);
            printf("So dien thoai: %s\n\n", studentList[i].phoneNumber);
        }
    }

    return 0;
}
