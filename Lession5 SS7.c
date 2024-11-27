#include<stdio.h>
int main(){
	int arr[5]={1,8,2,5,9};
	int max=arr[0];
	int min=arr[0];
	for(int i = 0; i<5; i++){
		if(arr[i]> max){
			max = arr[i];
		}
		if(arr[i]<min){
			min = arr[i];
		}
	}
	printf("Gia tri lon nhat cua mang la %d\nGia tri nho nhat cua mang la %d", max, min);
	return 0;
	
}