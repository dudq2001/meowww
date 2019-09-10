#include<stdio.h>
int main(){
	int x[12];
	int s,i;
	int avg;
	
	for(int i=0;i<12;i++){
		scanf("%d",&x[i]);
		
	}
		for(int i=0;i<12;i++){
			s=0;
	
}int count=0;
	for(int i=0;i<12;i++){
	s=s+x[i];
	count++;
}
avg=s/count;
printf("trung binh %d\n",avg);
return 0;
}
