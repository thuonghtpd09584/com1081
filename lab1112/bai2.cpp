#include <stdio.h>
int main() {
    int arr[3][3] = {{3, 9, 11}, {2, 6, 15}, {4, 7, 24}};
    int i, j, num; 
    printf("Mang 2 chieu: \n");// In ra mang 2 chieu
    for ( i = 0; i < 3; i++) 
{
        for ( j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    // Nhap so và kiem tra có trong mang hay không
    printf("Nhap vao mot so bat ky tu 1-100: ");
    scanf("%d", &num);
    int found = 0; // bien danh dau so có trong mang hay không
    for ( i = 0; i < 3; i++) {
        for ( j = 0; j < 3; j++) {
            if (arr[i][j] == num) {
                printf("So %d trong mang tai vi tri %d.\n");
                found = 1;
            }
        }
    }
    if (!found) {
        printf("So %d khong co trong mang.\n", num);
    }

    return 0;
}
