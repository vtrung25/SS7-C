#include<stdio.h>
int main(){
	int arr[5] = {2, 5, 1, 8, 9};
	for(int i = 0; i<5; i++){
		printf("arr[%d] : %d \n", i, arr[i]);
		
		
		
		
	}
	int length = sizeof(arr)/sizeof(arr[0]);
	printf("Do dai cua mang la %d ", length);
	return 0;
}