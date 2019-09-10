#include<stdio.h>
int main(){
	int x;
	printf("anh xinhgai nhat phai khong\n");
	printf("1.dung,anh qua xinhgai\n");
	printf("2.sai\n");
	
	while(x<1&&x>2){
		printf("vui long chon lai");
		scanf("%d",&x);
	}
	switch (x){
	case 1: printf("dung,anh qua xinhgai");break;
	case 2: printf("sai,m co bi mu khong ma chon sai");break;
	}
	return 0;
	}
	
	
	
		
		
		
