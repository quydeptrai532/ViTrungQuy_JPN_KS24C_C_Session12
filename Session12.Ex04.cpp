#include<stdio.h>

int quydz(int arr[],int size){
	int max=arr[0];
	for(int i=1;i<size;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
	return max;
}
int main(){
	int n;
	printf("nhap so phan tu cua mang\n");
	scanf("%d",&n);
	int mang[n];
	printf("nhap cac phan tu cua mang\n");
	for(int i=0;i<n;i++){
		scanf("%d",&mang[i]);
	}
	printf("gia tri lon nhat cua mang la:%d",quydz(mang,n));
	return 0;
}
