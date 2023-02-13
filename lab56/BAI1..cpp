#include<stdio.h>
#include<string> 
using namespace std; 
int main(){
	char s[50]; 
	printf("Nhap ho ten ho sinh: ");
	fflush(stdin);
    gets(s);
	float toan, li, hoa;
	float diemtb;
	printf("nhap diem toan: ");
	scanf("%f",&toan);
    printf("nhap diem li: ");
	scanf("%f",&li);
	printf("nhap diem hoa: ");
	scanf("%f",&hoa);
	diemtb=(toan+li+hoa)/3; 
	printf("Diem trung binh la: %.1f",diemtb);
	diemtb=(toan+li+hoa)/3; 
	switch(diemtb>=9){
		case 1:
			printf("Loai A"); 
			break;
		case 2 :
			printf("Loai B") ;
			break; 
		case 3 :
			printf("Loai C") ;
			break; 
		case 4 :
			break;
			printf("Loai D") ;
			break;
	} 
	switch(diemtb>=7){
		case 5:
			printf("Loai A"); 
			break;
		case 6 :
			printf("Loai B") ;
			break; 
		case 7 :
			printf("Loai C") ;
			break; 
		case 8 :
			printf("Loai D") ;
			break; 
	}
	switch(diemtb>=5){
		case 9:
			printf("Loai A"); 
			break;
		case 10 :
			printf("Loai B") ;
			break; 
		case 11 :
			printf("Loai C") ;
			break; 
		case 12 :
			printf("Loai D") ;
			break; 
	}
	switch(diemtb>5){
		case 13:
			printf("Loai A"); 
			break;
		case 14 :
			printf("Loai B") ;
			break; 
		case 15 :
			printf("Loai C") ;
			break; 
		case 16:
			printf("Loai D") ;
			break; 
	}
}


