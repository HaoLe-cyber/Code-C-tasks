#include <stdio.h>
#define MAX 100
int currentLength;

void inputArray(int arr[MAX], int elementNumber){
    for(int i = 0; i < elementNumber; i++){
        printf("Nhap phan tu thu %d: ", i);
        scanf("%d", &arr[i]);
    }
    currentLength = elementNumber;
}
void outputArray(int arr[MAX]){
    for(int i = 0; i < currentLength; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void addElements(int arr[MAX], int addElement, int addIndex){
    if(addIndex < 0 || addIndex > currentLength){
        printf("Khong the them phan tu vao vi tri %d\n", addIndex);
    }else{
        for(int i = currentLength; i > addIndex; i--){
            arr[i] = arr[i - 1];
        }
        arr[addIndex] = addElement;
        currentLength++;
    }
}
void fixElements(int arr[MAX], int fixElement, int fixIndex){
    if (fixIndex < 0 || fixIndex >= currentLength){
        printf("Khong the sua phan tu tai vi tri %d\n", fixIndex);
    }else{
        arr[fixIndex] = fixElement;
    }
}
void deleteElement(int arr[MAX], int delIndex){
    if(delIndex < 0 || delIndex >= currentLength){
        printf("Khong the xoa phan tu tai vi tri %d\n", delIndex);
    }else{
        for(int i = delIndex; i < currentLength - 1; i++){
            arr[i] = arr[i + 1];
        }
        currentLength--;
    }
}
void sortElements(int arr[MAX]){
    char choice;
    printf ("************************\n");
    printf ("a. Sap xep tang dan\n");
    printf ("b. Sap xep giam dan\n");
    printf ("************************\n");
    printf ("Lua chon cua ban: ");
    scanf (" %c", &choice);
    switch (choice){
        case 'a':
            for(int i = 0; i < currentLength - 1; i++){
                for(int j = i + 1; j < currentLength; j++){
                    if(arr[i] > arr[j]){
                        int temp = arr[i];
                        arr[i] = arr[j];
                        arr[j] = temp;
                    }
                }
            }
        case 'b':
            for(int i = 0; i < currentLength - 1; i++){
                for(int j = i + 1; j < currentLength; j++){
                    if(arr[i] < arr[j]){
                        int temp = arr[i];
                        arr[i] = arr[j];
                        arr[j] = temp;
                    }
                }
            }
            break;
    }
}
void searchElements(int arr[MAX], int searchElement){
    printf ("***********************\n");
    printf ("a. Tim kiem tuyen tinh\n");
    printf ("b. Tim kiem nhi phan\n");
    printf ("***********************\n");
    printf ("Lua chon cua ban: ");
    char choice;
    scanf(" %c", &choice);
    switch (choice){
        case 'a':
            for(int i = 0; i < currentLength; i++){
                if(arr[i] == searchElement){
                    printf("Phan tu %d nam o vi tri %d\n", searchElement, i);
                    return;
                }
            }
            printf("Khong tim thay phan tu %d trong mang\n", searchElement);
            break;
        case 'b':
            int left = 0;
            int right = currentLength - 1;
            while(left <= right){
                int mid = left + (right - left) / 2;
                if(arr[mid] == searchElement){
                    printf("Phan tu %d nam o vi tri %d\n", searchElement, mid);
                    return;
                }else if(arr[mid] < searchElement){
                    left = mid + 1;
                }else{
                    right = mid - 1;
                }
            }
            printf("Khong tim thay phan tu %d trong mang\n", searchElement);
            break;
    }
}
int main(){
    int choice;
    int arr[MAX];
    do
    {
        printf ("*************************************\n");
        printf ("1. Nhap so phan tu can nhao va gia tri tung phan tu.\n");
        printf ("2. In ra cac phan tu trong mang.\n");
        printf ("3. Them phan tu vao vi tri chi dinh\n");
        printf ("4. Sua phan tu tai vi tri chi dinh\n");
        printf ("5. Xoa phan tu tai vi tri chi dinh\n");
        printf ("6. Sap xep cac phan tu trong mang\n");
        printf ("7. Tim kiem phan tu trong mang\n");
        printf ("8. Thoat\n");
        printf ("*************************************\n");
        printf ("Lua chon cua ban: ");
        scanf ("%d", &choice);
        switch (choice)
        {
        case 1:
            int elementNumber;
            printf("Nhap so phan tu can nhap: ");
            scanf("%d", &elementNumber);
            inputArray(arr, elementNumber);
            break;
        case 2:
            outputArray(arr);
            break;
        case 3:
            int addElement, addIndex;
            printf("Nhap phan tu can them: ");
            scanf("%d", &addElement);
            printf("Nhap vi tri can them: ");
            scanf("%d", &addIndex);
            addElements(arr, addElement, addIndex);
            break;
        case 4:
            int fixElement, fixIndex;
            printf("Nhap phan tu can sua: ");
            scanf("%d", &fixElement);
            printf("Nhap vi tri can sua: ");
            scanf("%d", &fixIndex);
            fixElements(arr, fixElement, fixIndex);
            break;
        case 5:
            int delIndex;
            printf("Nhap vi tri can xoa: ");
            scanf("%d", &delIndex);
            deleteElement(arr, delIndex);
            break;
        case 6:
            sortElements(arr);
            break;
        case 7:
            int searchElement;
            printf("Nhap phan tu can tim: ");
            scanf("%d", &searchElement);
            searchElements(arr, searchElement);
            break;
        case 8:
            printf ("Thoat chuong trinh\n");
            break;
        default:
            printf ("Lua chon khong hop le!!\n");
            break;
        }
    } while (choice != 8);
    return 0;
}