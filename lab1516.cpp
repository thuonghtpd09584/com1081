#include<stdio.h>
#include<string.h>
struct dob{
	int ngay;
	int thang;
	int nam;
};
struct sinhvien{
	int MaSV;// ma sinh vien
	char Ho[50];// ho sv
	char Ten[50];// ten cua sv
	struct dob ngaysinh[20];// nam sinh
	char Diachi[100];// que quan
	char GioiTinh[20];// gioi tinh
	char Malop[20];// ma lop cua sv
}; 
int main(){
struct sinhvien sv1= {1,"Nguyen","Quang Minh",{10-11-2004},"HaTinh","Nam","WE1013"};
struct sinhvien sv2= {2,"hoang","Thi Thuong",{19-02-2004},"HaTinh","Nu","IT1043"};
struct sinhvien sv3;
sv3=sv1;
printf("sv3:%d %s %s %d\/%d\/%d %s %s %s\n",sv1.MaSV,sv1.Ho,sv1.Ten,sv1.ngaysinh,sv1.Diachi,sv1.GioiTinh,sv1.Malop);
sv3.Sinhvien=1;
strcpy(sv3.Ho, "Nguyen");
strcpy(sv3.Ten,"Quang Minh");
sv3.ngaysinh.ngay=10;
sv3.ngaysinh.thang=11;
sv3.ngaysinh.nam=2004;
ctrcpy(sv3.Diachi, "Ha Tinh");
strcpy(sv3.GioiTinh, "Nam");
strcpy(sv3.Malop,"WE1013");
printf("%d %s %s %d\/%d\/%d %s %s %s\n",sv3.MaSV,sv3.Ho,sv3.Ten,sv3.ngaysinh,sv3.Diachi,sv3.GioiTinh,sv3.Malop);

return 0;	
}
