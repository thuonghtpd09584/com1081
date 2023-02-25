#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char str1[] = "Viet Nam Dat Nuoc Toi";
    int len1 = strlen(str1);//strlen() la de tinh do dai str1 bao gom khoang trong 
    printf("Do dai bao gom khoang trong: %d\n", len1);
    int len2 = 0;
    for (int i = 0; i < len1; i++) {
        if (str1[i] != ' ') {
            len2++;
        }
        //nvong lap for de tinh do dai ko co khoang trong 
		//neu ko phai la khoang trong thi len2++ neu la khoang trong 
		//thi lap lai cho den khi nao het str1
    }
    printf("Do dai khong bao gom khoang trong : %d\n", len2);
    int soluong_t = 0;
    int vitri_t[len1];
    for (int i = 0; i < len1; i++) {
        if (tolower(str1[i]) == 't') {
            soluong_t++;
            vitri_t[soluong_t-1] = i;
        }
        //vong lap for de tinh so luong t (tinh ca t hoa ca t thuong vi dung tolower())
		// tolower dung de chuyen cac chu in hoa thanh thuong
		//neu str[i] = t thi soluong_t++ va luu vi tri cua t 
		// soluong_t-1 vi neu str[i]=t la chu cai dau tien
		//thi soluong_t =1 va no dc luu o vi tri thu 0 
    }
    printf("so luong chu t trong chuoi : %d\n", soluong_t);
    printf("vi tri chu t trong chuoi :");
    for (int i = 0; i < soluong_t; i++) {
        printf(" %d", vitri_t[i]);
        // vong lap for de in ra tung vi tri cua t 
    }
    printf("\n");
    char str2[len1];
    strcpy(str2, str1);//strcpy de copy str1 sang str2 
    for (int i = 0; i <= len1; i++) { 
        if (i == 0 || str1[i-1] == ' ') {
            str2[i] = 'A';
        }
        //vong lap for de thay doi chu cai dau tien cua moi chu thanh chu A 
        //neu i = 0 (chu cai dau tien) hoac truoc i la khoang trong 
		// thi thay chu cai do thanh chu A  
    }
    printf("chuoi chu in hoa cua str1 : ");
    for (int i = 0; i < len1; i++) {
        printf("%c", toupper(str1[i]));
    }
    //vong lap for de thay chu cai trong str1 thanh chu in hoa bang ham toupper
	// ham toupper de thay chu cai in thuong thanh in hoa in hoa thi giu nguyen 
    printf("\n");
    printf("chuoi chu thuong cua str2: ");
    for (int i = 0; i < len1; i++) {
        printf("%c", tolower(str2[i]));
    }
    //vong lap for de thay chu cai trong str2 thanh chu thuong bang ham tolower
    //ham tolower de thay chu cai in hoa thanh in thuong con in thuong giu nguyen
    printf("\n");
    if (strcmp(str1, str2) == 0) {
        printf("str1 va str2 giong nhau.\n");
    } else {
        printf("str1 va str2 khac nhau.\n");
    }
//strcmp dung de so sanh 2 chuoi 
//Neu str1 < str2, hàm tra ve mot so nguyen am.
//Neu str1 = str2, hàm tra ve 0.
//Neu str1 > str2, hàm tra ve mot so nguyen duong.
    return 0;
}

