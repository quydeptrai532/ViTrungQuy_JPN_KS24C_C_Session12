#include<stdio.h>

int quydeptrai(int a){
	int factorial=1;
	for(int i=1;i<=a;i++){
		factorial*=i;
	}
	return factorial;
}
int main(){
	int quydz;
	printf("nhap so can tinh giai thua\n ");
	scanf("%d",&quydz);
    printf("giai thua cua so vua nhap la :%d",quydeptrai(quydz));
    return 0;
}
