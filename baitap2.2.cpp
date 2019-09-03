#include <stdio.h>
int main(){
	int x;
	float laixuat1;
	float laixuat2;
	float laixuat3;
	float tong;
	x=1000;
	laixuat1 = x + x * 0.08;
	laixuat2 = laixuat1 + laixuat1 * 0.08;
	laixuat3 = laixuat2 + laixuat2 * 0.08;
	tong = laixuat3 + laixuat3 * 0.08;
	
	printf("gia tri cua tong = %f\n",tong);
	
	return 0;
}
