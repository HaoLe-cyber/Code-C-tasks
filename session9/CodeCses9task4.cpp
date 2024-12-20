#include <stdio.h>

int main(){
    int choice,arr[100], elementAmount,i, currentLength;
    printf (" MENU\n");
    printf ("\n");
    printf ("\n");
    printf ("1. Nhap vao mang\n");
    printf ("2. Hien thi mang\n");
    printf ("3. Them phan tu\n");
    printf ("4. Sua phan tu\n");
    printf ("5. Xoa phan tu\n");
    printf ("6. Thoat\n");
    printf ("\n");
    while (choice!=6)
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
        case 4:
            int changeIndex, changeElement;
            printf ("Hay nhap vao vi tri ban muon thay doi: ");
            scanf ("%d", &changeIndex);
            if (changeIndex<0 || changeIndex >elementAmount)
            {
                printf ("Vui long chon dung pham vi mang da chon tu truoc (0-%d)!", elementAmount);
                return 1;
            }else{
                printf ("Gia tri cu la: %d\n", arr[changeIndex]);
            }
            printf ("Hay nhap vao phan tu ban muon thay doi: ");
            scanf ("%d", &changeElement);
            arr[changeIndex] = changeElement;
            break;
        case 5:
            int deleteIndex;
            printf ("Hay nhap vi tri phan tu muon xoa: ");
            scanf ("%d", &deleteIndex);
            if (deleteIndex < 0 || deleteIndex > currentLength)
            {
                printf ("Hay nhap dung pham vi cua mang (0- %d)", currentLength);
                return 1;
            }else {
                for ( i = deleteIndex; i < currentLength; i++)
                {
                    arr[i]= arr[i+1];
                }
                currentLength--;
            }
            break;
        case 6:
            printf ("Thoat chuong trinh");
            break;
        default:
            printf ("Vui long chon trong pham vi cac lua chon o tren!");
            break;
        }
    }
    return 0;
}