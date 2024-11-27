#include<stdio.h>
int main(){
	int a;
	printf("Nhap so phan tu vao mang ");
	scanf("%d", &a);
	int arr[a];
	for(int i =  0;i<a;i++){
		printf("Nhap phan tu %d ", i + 1);
		scanf("%d", &arr[i]);
		
	}
	printf("Mang duoc nhap la\n");
	for(int i = 0;i<a; i++){
		printf("arr[%d] = %d\n", i, arr[i]);
	}
	return 0;
}