#include <stdio.h>
struct SinhVien{
	char name[50];
	int age;
	char phoneNumber[15];
};
int main(){
	struct SinhVien std1[5];
		for(int i=0;i<5;i++){
		    printf("nhap ten sinh vien: ");
		    fgets(std1[i].name,sizeof(std1[i].name),stdin);
		    printf("nhap tuoi sinh vien: ");
		    scanf("%d",&std1[i].age);
		    fflush(stdin);
		    printf("nhap so dien thoai sinh vien: ");
		    fgets(std1[i].phoneNumber,sizeof(std1[i].phoneNumber),stdin);
	   };
	for(int i=0;i<5;i++){
		    printf("ten sinh vien: %s\n",std1[i].name);
		    printf("tuoi sinh vien: %d\n",std1[i].age);
		    printf("so dien thoai sinh vien: %s\n",std1[i].phoneNumber);
	   }
	return 0;
}
