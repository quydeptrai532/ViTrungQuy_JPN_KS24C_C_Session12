#include<stdio.h>

int quydztimsonguyento(int a){
	if(a<2){
		return 0;
	}
	for(int i=2;i*i<=a;i++){
		if(a%i==0){
			return 0;
		}
	}
	return 1;
}
int main(){
	int so1,so2;
	printf("nhap so thu nhat\n ");
	scanf("%d",&so1);
	if (quydztimsonguyento(so1)){ printf("%d la so nguyen to\n",so1);
	}
	else  { printf(" %d khong phai so nguyen to\n",so1);
	}
	printf("nhap so thu hai \n");
	scanf("%d",&so2);
	if(quydztimsonguyento(so2)){
		printf("%d la so nguyen to\n",so2);
	}
	else  { printf("%d khong phai so nguyen to\n",so2);
	}
	return 0;
}
