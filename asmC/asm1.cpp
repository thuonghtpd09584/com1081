#include<stdio.h>
#include<math.h>
 void menu(){
 	printf("---------------Menu-----------------\n"); 
 	printf("1.Kiem tra so nguyen \n"); 
 	printf("2.Tim uoc chung va boi chung cua 2 so \n");
 	printf("3.Chuong trinh tinh tien cho quan karaoke \n");
	printf("4.Tinh tien dien \n");
	printf("5.Chuc nang doi ten \n"); 
 	printf("6.Chuc nang tinh lai xuat vay ngan hang vay tra gop \n");
	printf("7.Xay dung chuong trinh vay tien mua xe \n"); 
	printf("8.Sap xep thong tin sinh vien \n"); 
 	printf("9.Xay dung game FPOLY-LOTT(2/15) \n");
	printf("10.Xay dung tinh than tinh toan phan so \n");
	printf("11.Thoat"); 
 } 
 void kiem_tra_so_nguyen () { 
// 	int i, flag = 0; 
 	float x; 
    printf("Nhap x: ");
    scanf("%f", &x);
    if (x == (int)x)
    {
        printf("%f la so nguyen.\n", x);
    }
    else
    {
        printf("%f khong phai la so nguyen.\n", x);
//        return;
    }
//    
//    if (x < 2)
//    {
//        printf("%d khong phai la so nguyen to.\n", x);
//    }
//    else
//    {
//        for (i = 2; i <= sqrt(x); i++)
//        {
//            if (x % i == 0)
//            {
//                flag = 1;
//                break;
//            }
//        }
//        if (flag == 0)
//        {
//            printf("%d la so nguyen to.\n", x);
//        }
//        else
//        {
//            printf("%d khong phai la so nguyen to.\n", x);
//        }
//    }
//    if (sqrt(x) == (int)sqrt(x))
//    {
//        printf("%d la so chinh phuong.\n", x);
//    }
//    else
//    {
//        printf("%d khong phai la so chinh phuong.\n", x);
//    }
}
 void tim_uoc_chung_va_boi_so_chung_cua_2_so() {
 	int x,y;
	printf("Nhap x: ");
	scanf("%d",&x);
	printf("Nhap y: ");
	scanf("%d",&y);
	for(int i=x;i>0;i--){
		if(x%i==0 && y%i==0){
			printf("uoc chung lon nhat la %d",i); 
			break; 
		}
	}
	for(int i=x;i=x*y;i++){
		if(i%x==0 && i%y==0){
			printf("\nboi chung nho nhat la %d\n",i); 
			break; 
		}
	}
 } 
 void chuong_trinh_tinh_tien_cho_quan_karaoke(){
   int giobd, giokt;
   printf("Nhap gio bat dau: ");
   scanf("%d",&giobd) ;
   printf("Nhap gio ket thuc: ");
   scanf("%d",&giokt) ;
   if(giobd <12 || giokt >23 ){
   	printf("Quan hoat dong tu 12->23 h. Xin moi nhap lai \n") ;
   } 
   while(giobd <12 || giokt > 23 ); 
   int sogiohat = giokt - giobd; 
   int tienthem; 
   double tienthanhtoan;
   double giothem; 
   if(sogiohat <= 3){
   	tienthanhtoan = sogiohat * 150000 ;
   } else{
   	giothem = sogiohat - 3;
	tienthem = giothem * 150000 *0.7;
	tienthanhtoan = 3 * 150000 + tienthem; 
   } 
   if( giobd >= 14 && giobd <= 17){
   	tienthanhtoan = tienthanhtoan * 0.9; 
   } 
   printf("So tien quy khach can thanh toan la: %.2f \n",tienthanhtoan) ;
   
 } 
 void tinh_tien_dien (){
	double kwh; 
	printf("Nhap so kwh: ");
	scanf("%f",&kwh);
	double tongtien;
	double bac1 = 1678; 
	double bac2 = 1734; 
	double bac3 = 2014; 
	double bac4 = 2536; 
	double bac5 = 2834;
	double bac6 = 2927;  
	if(kwh <=50){
		tongtien = kwh * bac1; 
	} else if(kwh <=100) {
		tongtien = 50 * bac1 + (kwh-50)*bac2;
	}else if(kwh <=200){
		tongtien = 50*bac1 + 50*bac2 + (kwh -100)*bac3; 
	}else if(kwh <= 300){
		tongtien = 50*bac1 + 50*bac2 + 100*bac3 + (kwh -200)*bac4; 
	} else if(kwh <= 400) {
		tongtien = 50*bac1 + 50*bac2 + 100*bac3 + 100*bac4 + (kwh -300)*bac5; 
	}else if(kwh <=500){
		tongtien = 50*bac1 + 50*bac2 + 100*bac3 + 100*bac4 + 100*bac5 + (kwh -400)*bac6;
	}
	printf("So tien khach hang phai tra la: %.2f \n",tongtien) ;
	} 
 
 void chuc_nang_doi_ten () {
 	 int tien, menhgia[9] = {500, 200, 100, 50, 20, 19, 5, 2, 1}, i = 0;
    int soto[9] = {0};
	
	do{
		printf ("\nMoi nhap so tien: ");
		scanf ("%d", &tien);}
	while(tien <= 0);	
	while (i < 9){
		if (tien > menhgia[i]){
			break;}
		else{
			i++;}
	}
	
	while (i<9){
		soto[i] = tien / menhgia[i];
		tien = tien % menhgia[i];
		i++;}
	
	printf ("\nDoi duoc:");
	
	for (i=0; i<9; i++){
		if (soto[i] > 0){
			printf ("\n%d to %d", soto[i], menhgia[i]);}
	}
	printf ("\n");
 }
 void chuc_nang_tinh_lai_xuat_vay_ngan_hang_vay_tra_gop (){
 	float tien, vay, lai, trahangthang, tong;
	int i;
	
	printf ("\nMoi nhap so tien can vay: ");
	scanf ("%f", &vay);
	printf ("\nKy han\tLai phai tra\tGoc phai tra\tSo tien phai tra\tSo tien con lai");
	
	trahangthang = vay / 12;
		
	for (i = 1; i <= 12; i++){
		lai = vay * 0.05;
		tong = lai + trahangthang;
		vay -= trahangthang;
		printf ("\n%d\t%2.f\t\t%2.f\t\t%2.f\t\t\t%2.f", i, lai, trahangthang, tong, vay);}
		
	printf ("\n");
 	 
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
                printf("Hen gap lai!\n");
                return 0;
            default:
                printf("Lua chon khong hop le, moi ban nhap lai!\n");
                break;
    }
}
}
