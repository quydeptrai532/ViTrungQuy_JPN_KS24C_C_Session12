#include<stdio.h>

int quydeptrai(int a, int b){
	int tong= a+b;
	return tong;}
int main(){
	int so1,so2,tong;
	printf("nhap so thu nhat \n");
	scanf("%d",&so1);
	printf("nhap so thu hai \n");
	scanf("%d",&so2);
	tong=quydeptrai(so1,so2);
	printf("tong cua %d va %d la : %d",so1,so2,tong);
	return 0;
}

