#include <stdio.h>
#include <string.h>

typedef struct student {
    char name[20];
    int id;
    int age;
    char phoneNumber[12];
} studentInfo;

int main() {
    studentInfo studentList[50];
    for (int i = 0; i < 5; i++) {
        studentList[i].id = i + 1; // Gán ID cho từng sinh viên
        printf("Nhap thong tin sinh vien ID: %d.\n", studentList[i].id);
        printf("Nhap ho va ten: ");
        getchar(); // Xóa ký tự newline
        fgets(studentList[i].name, sizeof(studentList[i].name), stdin);
        studentList[i].name[strcspn(studentList[i].name, "\n")] = '\0'; // Xóa ký tự newline
        printf("Nhap vao tuoi sinh vien: ");
        scanf("%d", &studentList[i].age);
        printf("Nhap vao so dien thoai sinh vien: ");
        scanf("%s", studentList[i].phoneNumber);

        printf("\n");
    }
    // In thông tin các sinh viên đã nhập
    printf("Thong tin cac sinh vien vua nhap:\n");
    for (int i = 0; i < 5; i++) {
        printf("Sinh vien ID: %d\n", studentList[i].id);
        printf("Ho va ten: %s\n", studentList[i].name);
        printf("Tuoi: %d\n", studentList[i].age);
        printf("So dien thoai: %s\n\n", studentList[i].phoneNumber);
    }
    return 0;
}
