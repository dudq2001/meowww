#include <stdio.h>
int main(){
	int x;
	printf("moi chon mon\n");
	printf("1.nuoc\n");
	printf("2.cafe\n");
	printf("3.kem\n");
	scanf("%d",&x);
	while(x<1&&x>3){
		printf("vui long chon lai mon");
		scanf("%d",&x);
	}
	switch (x){
		case 1: printf("da chon nuoc");break;
		case 2: printf("da chon cafe");break;
		case 3:	printf("da chon kem");break;			
		}	
	
	
	
	
	
	return 0;
	}
