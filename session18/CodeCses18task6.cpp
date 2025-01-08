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
    // Thêm sinh viên vào cuối mảng
    printf("Nhap thong tin sinh vien moi:\n");
    studentList[studentCount].id = studentCount + 1; // Gán ID mới cho sinh viên
    printf("Nhap ho va ten: ");
    getchar();
    fgets(studentList[studentCount].name, sizeof(studentList[studentCount].name), stdin);
    studentList[studentCount].name[strcspn(studentList[studentCount].name, "\n")] = '\0';// xóa ký tự newline
    printf("Nhap vao tuoi sinh vien: ");
    scanf("%d", &studentList[studentCount].age);
    printf("Nhap vao so dien thoai sinh vien: ");
    scanf("%s", studentList[studentCount].phoneNumber);
    studentCount++;
    // Hiển thị thông tin toàn bộ sinh viên
    printf("\nThong tin cac sinh vien sau khi them moi:\n");
    for (int i = 0; i < studentCount; i++) {
        printf("Sinh vien ID: %d\n", studentList[i].id);
        printf("Ho va ten: %s\n", studentList[i].name);
        printf("Tuoi: %d\n", studentList[i].age);
        printf("So dien thoai: %s\n\n", studentList[i].phoneNumber);
    }
    return 0;
}