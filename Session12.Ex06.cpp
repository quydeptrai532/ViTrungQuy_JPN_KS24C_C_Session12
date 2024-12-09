#include<stdio.h>

int quydzhoanhao(int a){
	int sum;
	for(int i=1;i<a;i++){
		if(a%i==0){
			sum+=i;
		}
	}
	if(sum==a){
		return 1;
	}
	else{
		return 0;
	}
}
int main(){
	int so1,so2;
	printf("nhap so thu nhat\n");
	scanf("%d",&so1);
	if(quydzhoanhao(so1)){
		printf("%d la so hoan hao\n",so1);
	}
	else{
		printf("%d ko phai la so hoan hao\n",so1);
	}
	printf("nhap so thu hai\n");
	scanf("%d",&so2);
	if(quydzhoanhao(so2)){
		printf("%d la so hoan hao\n",so2);
	}
	else{
		printf("%d ko phai la so hoan hao\n",so2);
	}
	return 0;
}
