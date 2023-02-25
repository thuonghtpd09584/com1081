#include <stdio.h>
#include <string.h>
struct SinhVien {
    char maSV[10];
    char ho[20];
    char ten[20];
    int ngaySinh;
    int thangSinh;
    int namSinh;
    char queQuan[50];
    char gioiTinh[5];
    char maLop[10];
};
int main() {
    struct SinhVien dsSv[5];
    for (int i = 0; i < 5; i++) {
        printf("Nhap thong tin cho sinh vien thu %d:\n", i + 1);
        printf("Ma SV: ");
        scanf("%s", dsSv[i].maSV);
        printf("Ho: ");
        scanf("%s", dsSv[i].ho);
        printf("Ten: ");
        scanf("%s", dsSv[i].ten);
        printf("Ngay sinh (dd/mm/yyyy): ");
        scanf("%d/%d/%d", &dsSv[i].ngaySinh, &dsSv[i].thangSinh, &dsSv[i].namSinh);
        printf("Que quan: ");
        scanf("%s", dsSv[i].queQuan);
        printf("Gioi tinh: ");
        scanf("%s", dsSv[i].gioiTinh);
        printf("Ma lop: ");
        scanf("%s", dsSv[i].maLop);
        printf("\n");
    }
    printf("Danh sach sinh vien:\n");
    for (int i = 0; i < 5; i++) {
        printf("Sinh vien %d: %s %s\n", i + 1, dsSv[i].ho, dsSv[i].ten);
        printf("Ma SV: %s\n", dsSv[i].maSV);
        printf("Ngay thang nam sinh: %d/%d/%d\n", dsSv[i].ngaySinh, dsSv[i].thangSinh, dsSv[i].namSinh);
        printf("Que quan: %s\n", dsSv[i].queQuan);
        printf("Gioi tinh: %s\n", dsSv[i].gioiTinh);
        printf("Ma lop: %s\n\n", dsSv[i].maLop);
    }
    return 0;
}
