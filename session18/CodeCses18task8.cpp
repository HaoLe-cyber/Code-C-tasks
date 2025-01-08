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
    // Kiểm tra sức chứa của mảng (đầy hay chưa đầy)
    int position;
    if (studentCount >= 50) {
        printf("Mảng đã đầy. Không thể chèn thêm sinh viên.\n");
        return 0;
    }
    // Kiểm tra vị trí chèn hợp lệ
    printf("Nhap vi tri chen sinh vien (0 den %d): ", studentCount);
    scanf("%d", &position);

    if (position < 0 || position > studentCount) {
        printf("Vi tri khong hop le.\n");
        return 0;
    }
    // Nhập thông tin sinh viên mới
    studentInfo newStudent;
    newStudent.id = studentCount + 1; // Tự động gán id theo số lượng sinh viên hiện tại
    printf("Nhap ho va ten sinh vien: ");
    getchar();
    fgets(newStudent.name, sizeof(newStudent.name), stdin);
    newStudent.name[strcspn(newStudent.name, "\n")] = '\0'; // Xóa ký tự newline
    printf("Nhap tuoi sinh vien: ");
    scanf("%d", &newStudent.age);
    printf("Nhap so dien thoai sinh vien: ");
    scanf("%s", newStudent.phoneNumber);
    // Di chuyển các sinh viên phía sau vị trí chèn lên 1 vị trí
    for (int i = studentCount; i > position; i--) {
        studentList[i] = studentList[i - 1];
    }
    // Chèn sinh viên mới vào vị trí đã chọn
    studentList[position] = newStudent;
    studentCount++;
    // Hiển thị thông tin các sinh viên sau khi chèn
    printf("\nThong tin cac sinh vien sau khi chen:\n");
    for (int i = 0; i < studentCount; i++) {
        printf("ID: %d\n", studentList[i].id);
        printf("Ho va ten: %s\n", studentList[i].name);
        printf("Tuoi: %d\n", studentList[i].age);
        printf("So dien thoai: %s\n\n", studentList[i].phoneNumber);
    }
    return 0;
}