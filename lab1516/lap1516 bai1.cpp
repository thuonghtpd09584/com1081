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
    struct SinhVien sv1 = {"SV001", "Nguyen", "Van A", 1, 1, 2000, "Ha Noi", "Nam", "D18CQCN01"};
    struct SinhVien sv2 = {"SV002", "Tran", "Thi B", 10, 2, 2001, "Hai Phong", "Nu", "D18CQCN02"};
    struct SinhVien sv3 = sv1;
    strcpy(sv3.ho, "Le");
    strcpy(sv3.ten, "Thi C");
    strcpy(sv3.queQuan, "Da Nang");
    printf("Sinh vien 1: %s %s\n", sv1.ho, sv1.ten);
    printf("Ma SV: %s\n", sv1.maSV);
    printf("Ngay thang nam sinh: %d/%d/%d\n", sv1.ngaySinh, sv1.thangSinh, sv1.namSinh);
    printf("Que quan: %s\n", sv1.queQuan);
    printf("Gioi tinh: %s\n", sv1.gioiTinh);
    printf("Ma lop: %s\n\n", sv1.maLop);
    printf("Sinh vien 2: %s %s\n", sv2.ho, sv2.ten);
    printf("Ma SV: %s\n", sv2.maSV);
    printf("Ngay thang nam sinh: %d/%d/%d\n", sv2.ngaySinh, sv2.thangSinh, sv2.namSinh);
    printf("Que quan: %s\n", sv2.queQuan);
    printf("Gioi tinh: %s\n", sv2.gioiTinh);
    printf("Ma lop: %s\n\n", sv2.maLop);
    printf("Sinh vien 3: %s %s\n", sv3.ho, sv3.ten);
    printf("Ma SV: %s\n", sv3.maSV);
    printf("Ngay thang nam sinh: %d/%d/%d\n", sv3.ngaySinh, sv3.thangSinh, sv3.namSinh);
    printf("Que quan: %s\n", sv3.queQuan);
    printf("Gioi tinh: %s\n", sv3.gioiTinh);
    printf("Ma lop: %s\n\n", sv3.maLop);
    return 0;
}
