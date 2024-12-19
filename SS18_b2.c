#include <stdio.h>
struct SinhVien{
	char name[50];
	int age;
	char phoneNumber[15];
};
int main(){
	struct SinhVien std1;
	printf("moi ban nhap ten: ");
	fgets(std1.name,sizeof(std1.name),stdin);
	printf("moi ban nhap tuoi: ");
	scanf("%d",&std1.age);
	fflush(stdin);
	printf("moi ban nhap so dien thoai: ");
	fgets(std1.phoneNumber,sizeof(std1.phoneNumber),stdin);
	printf("ten cua sinh vien: %s\n",std1.name);	
	printf("tuoi cua sinh vien: %d\n",std1.age);
	printf("so dien thoai cua sinh vien: %s\n",std1.phoneNumber);
	return 0;
}
