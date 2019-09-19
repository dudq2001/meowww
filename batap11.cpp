#include<stdio.h>
	int main(){
		int n;
		int x;
		int s=0;
		printf("enter number : ");
		scanf("%d",&n);
		for(;n!=0;){
			x=n%10;
			s+=x;
			n/=10;
			}
			printf("tong =%d",s);
			return 0;
			}
			
		
