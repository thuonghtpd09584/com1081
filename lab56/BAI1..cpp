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
	while(toan <0 || toan >10)
	{
		printf("Vui long nhap lai diem toan");
		scanf("%f",&toan);
	}
    printf("nhap diem li: ");
	scanf("%f",&li);
	while(li <0 || li >10)
	{
		printf("Vui long nhap lai diem li");
		scanf("%f",&li);
	}
	printf("nhap diem hoa: ");
	scanf("%f",&hoa);
	while(toan <0 || hoa >10)
	{
		printf("Vui long nhap lai diem hoa");
		scanf("%f",&hoa);
	}
	diemtb=(toan+li+hoa)/3; 
	printf("Diem trung binh la: %.2f \n ",diemtb);
	switch((int)diemtb){
		case 10:
			case 9:
			printf("Loai A"); 
			break;
		case 8 :
			case 7:
			printf("Loai B") ;
			break; 
		case 6 :
			case 5:
			printf("Loai C") ;
			break; 
		case 4 :
			printf("Loai D") ;
			break;
	
	}
}


