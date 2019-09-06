#include <stdio.h>
int main(){
	int a,b,c;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	while(a+b<=c||a+c<=b||b+c<=a){
		printf("nhap lai 3 canh cua tam giac\n");
			scanf("%d",&a);
        	scanf("%d",&b);
        	scanf("%d",&c);
	}
	printf("ba canh cua tam giac");
	
	
	
	
	return 0;
}
