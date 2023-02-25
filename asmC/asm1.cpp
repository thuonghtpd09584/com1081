#include<stdio.h>
#include<math.h>
 void menu(){
 	printf("---------------Menu-----------------\n"); 
 	printf("1.Kiem tra so nguyen \n"); 
 	printf("2.Tim uoc chung va boi chung cua 2 so \n");
 	printf("3.Chuong trinh tinh tien cho quan karaoke");
	printf("4.Tinh tien dien");
	printf("5.Chuc nang doi ten \n"); 
 	printf("6.Chuc nang tinh lai xuat vay ngan hang vay tra gop \n");
	printf("7.Xay dung chuong trinh vay tien mua xe \n"); 
	printf("8.Sap xep thong tin sinh vien \n"); 
 	printf("9.Xay dung game FPOLY-LOTT(2/15) \n");
	printf("10.Xay dung tinh than tinh toan phan so \n");
	printf("11.Thoat"); 
 } 
 void kiem_tra_so_nguyen () { 
}
 void tim_uoc_chung_va_boi_so_chung_cua_2_so() {
 } 
 void chuong_trinh_tinh_tien_cho_quan_karaoke(){
 } 
 void tinh_tien_dien (){
 } 
 void chuc_nang_doi_ten () {
 }
 void chuc_nang_tinh_lai_xuat_vay_ngan_hang_vay_tra_gop (){
 } 
 void xay_dung_chuong_trinh_vay_tien_xe(){
 } 
 void sap_xep_thong_tin_sinh_vien (){
 } 
 void xay_dung_game (){
 } 
 void xay_dung_chuong_trinh_tinh_toan_phan_so (){
 } 
 int main() {
    while (1) {
        menu();
        int chon;
        printf("\nNhap lua chon cua ban (1-11): ");
        scanf("%d", &chon);
        switch (chon) {
            case 1:
                kiem_tra_so_nguyen();
                break;
            case 2:
                tim_uoc_chung_va_boi_so_chung_cua_2_so();
                break;
            case 3:
			    chuong_trinh_tinh_tien_cho_quan_karaoke();
			    break;
		    case 4:
                tinh_tien_dien ();
                break;
            case 5:
                chuc_nang_doi_ten ();
                break;
            case 6:
			    chuc_nang_tinh_lai_xuat_vay_ngan_hang_vay_tra_gop();
			    break;
			case 7:
                xay_dung_chuong_trinh_vay_tien_xe();
                break;
            case 8:
                sap_xep_thong_tin_sinh_vien();
                break;
            case 9:
			    xay_dung_game();
			    break;
			case 10:
			    xay_dung_chuong_trinh_tinh_toan_phan_so();
			    break; 
            case 11:
                printf("Tam biet!\n");
                return 0;
            default:
                printf("Lua chon khong hop le, moi ban nhap lai!\n");
                break;
    }
}
}
