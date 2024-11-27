#include<stdio.h>
int main(){
	int arr[5] = {2,5,1,8,7};
	printf("Mang sau khi thay doi la\n");
	for(int i = 0; i<5; i++){
		if(arr[i]%2==0){
			arr[i]+=3;
			printf("arr[%d] = %d\n", i, arr[i]);
		}else{
			arr[i]+=2;
			printf("arr[%d] = %d\n", i, arr[i]);
		}
	}
	return 0;
}