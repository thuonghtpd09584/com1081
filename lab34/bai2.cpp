#include<stdio.h>
// thu vien ten 
#include<string>
int main(){
	// char ham ky tu 
	// [50] khong nhap qua 50 ky tu 
	char s[50];
    printf("Ho va ten hoc sinh: ");
    // 2 cai duoi de viet cach trong ten 
	fflush(stdin);
    gets(s);
	float toan, ly, hoa;
	float diemtb;
	printf("Nhap diem trung binh toan:") ;
	scanf("%f",&toan) ;
	printf("Nhap diem trung binh ly:") ;
	scanf("%f",&ly) ;
	printf("Nhap diem trung binh hoa:") ;
	scanf("%f",&hoa) ;
	diemtb=(toan + ly + hoa)/3;
	printf("Diem trung binh 3 mon la:%.1f\n",diemtb);
	if(diemtb>=9){
		printf("Loai A"); 
	} 
	else if(diemtb>=8){
		printf("Loai B"); 
	} 
	else if(diemtb>=6){
		printf("Loai C"); 
	} 
	else if(diemtb<5){
		printf("Loai D"); 
	} 
	return 0;
} 
