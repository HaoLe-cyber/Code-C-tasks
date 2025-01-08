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
    // Tìm kiếm và sửa thông tin sinh viên theo ID
    int searchID;
    printf("Nhap ID cua sinh vien can sua: ");
    scanf("%d", &searchID);
    int found = 0; // Biến kiểm tra tìm thấy sinh viên
    for (int i = 0; i < studentCount; i++) {
        if (studentList[i].id == searchID) {
            found = 1;
            printf("Thong tin sinh vien ID %d:\n", searchID);
            printf("Ho va ten: %s\n", studentList[i].name);
            printf("Tuoi: %d\n", studentList[i].age);
            printf("So dien thoai: %s\n\n", studentList[i].phoneNumber);
            // Sửa thông tin sinh viên
            printf("Nhap ho va ten moi: ");
            getchar(); // Xóa ký tự newline còn sót
            fgets(studentList[i].name, sizeof(studentList[i].name), stdin);
            studentList[i].name[strcspn(studentList[i].name, "\n")] = '\0'; // Xóa ký tự newline
            printf("Nhap tuoi moi: ");
            scanf("%d", &studentList[i].age);
            break;
        }
    }
    if (!found) {
        printf("Khong tim thay sinh vien co ID %d.\n", searchID);
    }
    // In thông tin toàn bộ sinh viên sau khi chỉnh sửa
    printf("\nThong tin cac sinh vien sau khi chinh sua:\n");
    for (int i = 0; i < studentCount; i++) {
        printf("ID: %d\n", studentList[i].id);
        printf("Ho va ten: %s\n", studentList[i].name);
        printf("Tuoi: %d\n", studentList[i].age);
        printf("So dien thoai: %s\n\n", studentList[i].phoneNumber);
    }
    return 0;
}
