#include <stdio.h>
#include <math.h>

int main(){
	float a,b,c,x1,x2,delta,x,x3;
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%f",&c);
	if(a=0,b=0,c=0){
		printf("phuong trinh vo so nghiem");
	}else if(a=0,b=0,c!=0){
		printf("phuong trinh vo nghiem");
	
	}
	if(a!=0){
	}
	
		delta=(float)(b*b-4*a*c);
		if(delta==0){
			 x=-b/(2*a);
			printf("%f la nghiem kep =x\n",x);
			
		}else if(delta>0){
			delta=sqrt(b*b-4*a*c);
			x1=(-b+delta)/(2*a);
			x2=(b+delta)/(2*a);
			printf("%f la nghiem thu nhat =x1\n",x1);
			printf("%f la nghiem thu hai=x2\n",x2);
		}else{
			printf("phuong trinh vo nghiem");
		
		}
		
		return 0;
		
			
		
		
	}

