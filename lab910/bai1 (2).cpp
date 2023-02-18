#include <stdio.h>
#include <math.h>
void menu() {
   printf("Menu:\n");
   printf("1. Cong 2 so nguyen\n");
   printf("2. Giai phuong trinh bac 2\n");
   printf("3. Thoat chuong trinh\n");
}

void cong2so() {
    int a, b;
    printf("Nhap a: ");
    scanf("%d", &a);
    printf("Nhap b: ");
    scanf("%d", &b);
    printf("Tong cua a va b la : %d\n", a + b);
}

void giaiphuongtrinhbac2() {
    float a, b, c;
    printf("Nhap a: ");
    scanf("%f", &a);
    printf("Nhap b: ");
    scanf("%f", &b);
    printf("Nhap c: ");
    scanf("%f", &c);
    float delta = b*b - 4*a*c;
    if (delta < 0) {
        printf("Phuong trinh vo nghiem\n");
    } else if (delta == 0) {
        float x = -b / (2*a);
        printf("Phuong trinh co nghiem kep x = %.2f\n", x);
    } else {
        float x1 = (-b + sqrt(delta)) / (2*a);
        float x2 = (-b - sqrt(delta)) / (2*a);
        printf("Phuong trinh co 2 nghiem phan biet: x1 = %.2f, x2 = %.2f\n", x1, x2);
    }
}
int main() {
    while (1) {
        menu();
        int chon;
        printf("Nhap lua chon cua ban (1-3): ");
        scanf("%d", &chon);
        switch (chon) {
            case 1:
                cong2so();
                break;
            case 2:
                giaiphuongtrinhbac2();
                break;
            case 3:
                printf("Tam biet!\n");
                return 0;
            default:
                printf("Lua chon khong hop le, moi ban nhap lai!\n");
                break;
    }
}
}




