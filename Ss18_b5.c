#include <stdio.h>
struct SinhVien{
	int id;
	char name[50];
	int age;
	char phoneNumber[15];
};
int main(){
	int id;
	int count=0;
	struct SinhVien std1[5]={
	{1,"dung",18,"0987311189"},
	{2,"huy",18,"0987311190"},
	{3,"hoan",18,"0987311191"},
	{4,"tung",18,"0987311192"},
	{5,"mono",18,"0987311193"},
	};
	printf("nhap id sinh vien: ");
	scanf("%d",&id);
	fflush(stdin);
	for(int i=0;i<5;i++){
		if(id==std1[i].id){
			printf("nhap ten muon thay: ");
			fgets(std1[i].name,sizeof(std1[i].name),stdin);
			printf("nhap tuoi muon sua: ");
			scanf("%d",&std1[i].age);
			fflush(stdin);
			count++;
		}
	}
	if(count==0){
		printf("khong tim thay id sinh vien\n");
	}
	for(int i=0;i<5;i++){
		printf("id: %d\n",i+1);
	    printf("ten sinh vien: %s\n",std1[i].name);
		printf("tuoi sinh vien: %d\n",std1[i].age);
		printf("so dien thoai sinh vien: %s\n",std1[i].phoneNumber);
	}
	return 0;
}
