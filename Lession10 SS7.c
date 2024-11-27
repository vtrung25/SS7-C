#include<stdio.h>
int main(){
	int a; 
	printf("Nhap so phan tu trong mang ");
	scanf("%d", &a);
	int arr[a], count;
	for(int i = 0; i<a; i++){
		printf("Nhap phan tu thu %d ", i + 1);
		scanf("%d", &arr[i]);
	}
	for(int i = 0; i<a; i++){
		
	
	for(int j = 1; j<arr[i]; j++){
	
	if(arr[i]%j==0){
		count++;
		if(count<=2){
		printf("%d\n", arr[i]);
	}
	}
	
	}
}
return 0;

}