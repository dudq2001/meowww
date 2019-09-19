#include<stdio.h>
#include<string.h>
void lowerCase(char s[]){
	scanf("%s",s);
	for(int i=0;i<30;i++){
	
  if(s[i]>=65 && s[i]<=90){
  	printf("%c",s[i]+32);
  	}else{
  		printf("%c",s[i]);
	  }
	  }
	  }
	  int main(){
	  	char s[30];
	  	lowerCase(s);
	  	}
