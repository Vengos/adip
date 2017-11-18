#include <stdio.h>

int main(){
	int n;
	int r;
	
	printf("Geben Sie eine Zahl zwischen 20 und 69 ein\n");
	do{
		scanf("%d",&n);	
		if(n<20 || n>69){
			printf("Ungueltige Zahl\n");
		}
	}while(n<20 || n>69);
	
	r=n%10;
	if(r==1){
		printf("ein-und-");
	}else if(r==2){
		printf("zwei-und-");
	}else if(r==3){
		printf("drei-und-");
	}else if(r==4){
		printf("vier-und-");
	}else if(r==5){
		printf("fuenf-und-");
	}else if(r==6){
		printf("sechs-und-");
	}else if(r==7){
		printf("sieben-und-");
	}else if(r==8){
		printf("acht-und-");
	}else if(r==9){
		printf("neun-und-");
	}
	r=n-r;
	if(r==20){
		printf("zwanzig");
	}else if(r==30){
		printf("dreissig");
	}else if(r==40){
		printf("vierzig");
	}else if(r==50){
		printf("fuenfzig");
	}else if(r==60){
		printf("sechzig");
	}
	
}
