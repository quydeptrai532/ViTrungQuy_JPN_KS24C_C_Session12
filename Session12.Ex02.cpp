#include<stdio.h>

void quyratdz(int arr[], int size){
	printf("Cac phan tu cua mang la :\n");
	for(int i=0;i<size;i++){
		printf("%d ",arr[i]);
	}
}
int main(){
	int n;
	printf("nhap so phan tu cua mang:\n");
	scanf("%d",&n);
	int mang[n];
    for(int i=0;i<n;i++){
    printf("nhap phan tu thu %d cua mang \n",i+1);
    scanf("%d",&mang[i]);
	}
    quyratdz(mang,n);
	return 0;
}
