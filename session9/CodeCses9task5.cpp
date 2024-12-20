#include <stdio.h>
#include <math.h>

int main(){
    int arr[100], choice = 0, elementAmount, currentLength,sum = 0, i, max, min, count;
    printf (" MENU\n");
    printf ("\n");
    printf ("1. Nhap vao mang\n");
    printf ("2. Hien thi mang\n");
    printf ("3. Hien thi cac phan tu chan va tong\n");
    printf ("4. Hien thi Min va Max\n");
    printf ("5. Hien thi cac phan so nguyen to va tong\n");
    printf ("6. Nhap vao 1 so va dem co bao nhieu phan tu do\n");
    printf ("7. Them phan tu\n");
    printf ("8. Thoat\n");
    printf ("\n");
    while (choice != 8)
    {
        printf ("Lua chon cua ban: ");
        scanf ("%d", &choice);
        switch (choice)
        {
        case 1:
            printf ("Hay nhap vao so luong phan tu trong mang: ");
            scanf ("%d", &elementAmount);
            currentLength = elementAmount;
            if (elementAmount<0 || elementAmount>100)
            {
                printf ("Vui long nhap dung pham vi mang (0-100)!!");
            }
            for (i = 0; i < elementAmount; i++)
            {
                printf ("Nhap phan tu arr[%d]: ", i);
                scanf ("%d", arr + i);
            }
            break;
        case 2:
            printf ("Mang: ");
            for ( i = 0; i < currentLength; i++)
            {
                printf ("%d ", arr[i]);
            }
            printf ("\n");
            break;
        case 3:
            sum = 0;
            printf ("Cac phan tu so chan la: ");
            for ( i = 0; i < currentLength; i++)
            {
                if (arr[i]%2==0)
                {
                    sum += arr[i];
                    printf ("%d ", arr[i]);
                }
            }
            printf ("\n");
            printf ("Tong cua cac phan tu do la: %d\n", sum);
            break;
        case 4:
            if (currentLength <= 0) {
                printf("Mang chua duoc nhap hoac khong co phan tu hop le!\n");
                break;
            }
            max = arr[0];
            min = arr[0];
            for (i = 0; i < currentLength; i++) {
            if (arr[i] > max) {
                max = arr[i];
            }
            if (arr[i] < min) {
                min = arr[i];
            }
            }
            printf("Phan tu lon nhat la: %d\n", max);
            printf("Phan tu nho nhat la: %d\n", min);
            break;
        case 5:
            sum = 0;
            printf ("Cac phan tu la so nguyen to la: ");
            for ( i = 0; i < currentLength; i++)
            {
                for (int j = 2; j <= sqrt(arr[i]); j++){
                    if (arr[i]%j!=0)
                    {
                        sum += arr[i];
                        printf ("%d ", arr[i]);
                    }
                }
            }
            printf ("\n");
            printf ("Tong cac phan tu la: %d\n", sum);
            break;
        case 6:
            int findNum;
            count = 0;
            printf ("Nhap vao so muon thong ke: ");
            scanf ("%d", &findNum);
            for ( i = 0; i < currentLength; i++)
            {
                if (arr[i]==findNum)
                {
                    count++;
                }
            }
            printf ("Phan tu %d da xuat hien %d lan.\n", findNum, count);
            break;
        case 7:
            int addIndex, addElement;
            printf ("Hay nhap vi tri ma ban muon them vao: ");
            scanf ("%d", &addIndex);
            if (addIndex <0 || addIndex >100)
            {
                printf ("Vui long hap dung vi tri chen (0-100)!!");
                return 1;
            }else {
                printf ("Hay nhap phan tu ban muon nhap: ");
                scanf ("%d", &addElement);
            }
            if (addIndex >= currentLength)
            {
                arr[currentLength++] = addElement;
            }else if (addIndex < currentLength)
            {
                for (i = currentLength; i > addIndex; i--)
                {
                    arr[i] = arr [i-1];
                }
                arr[i] = addElement;
                currentLength++;
            }
            break;
        case 8:
            printf ("Thoat chuong trinh");
            break;
        default:
            printf ("Vui long chon trong pham vi cac lua chon o tren!");
            break;
        }
    }
    printf ("\n");
    return 0;
}