#include <stdio.h>
struct SinhVien{
	int id;
	char name[50];
	int age;
	char phoneNumber[15];
};
int main(){
	struct SinhVien std1[50]={
	{1,"dung",18,"0987311189"},
	{2,"huy",18,"0987311190"},
	{3,"hoan",18,"0987311191"},
	{4,"tung",18,"0987311192"},
	{5,"mono",18,"0987311193"},
	};
	int size=5;
	printf("moi ban nhap ten: ");
	fgets(std1[size].name,sizeof(std1[size].name),stdin);
	printf("moi ban nhap tuoi: ");
	scanf("%d",&std1[size].age);
	fflush(stdin);
	printf("moi ban nhap so dien thoai: ");
	fgets(std1[size].phoneNumber,sizeof(std1[size].phoneNumber),stdin);
	std1[size].id=size+1;
	for(int i=0;i<6;i++){
		printf("id: %d\n",i+1);
	    printf("ten sinh vien: %s\n",std1[i].name);
		printf("tuoi sinh vien: %d\n",std1[i].age);
		printf("so dien thoai sinh vien: %s\n",std1[i].phoneNumber);
	}
	return 0;
}
