#include <stdio.h>

struct SinhVien{
	int age;
	char fullName[50];
	char phoneNumber[15];
	
};
int main(){
	struct SinhVien std1={"an hai dung","0987311189"};
	std1.age=18;
	printf("tuoi sinh vien la: %d\n",std1.age);
	printf("ten sinh vien la: %s\n",std1.fullName);
	printf("so dien thoai: %s\n",std1.phoneNumber);
	return 0;
}
