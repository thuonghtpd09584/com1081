#include<stdio.h>
// thu vien ten 
#include<string>
#include<iostream.h>
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
switch(diemtb){
		case 1:{
			printf("Loai A"); 
			break;}
		case 2 :{
			print("Loai B") ;
			break; }
		case 3 :{
			print("Loai C") ;
			break; }
		case 4 :{
			print("Loai D") ;
			break;} 
	return 0;
} 
