#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void initializegenerator() {
	srand(time(NULL));
}

int karteziehen() {
	
	int rnd;
	do{
		rnd = rand()%10+1;
	}while(rnd==1);
	
	return rnd;
}

int main() {
	initializegenerator();
	
	//house
	printf("House:\n");
	int h=karteziehen();
	printf("%i\n",h);
	
	// player
	printf("Player:\n");
	printf("1 for draw a card 0 for stay\n");
	int d;
	int p;
	int psum=0;
	int hsum=0;
	int u=1;
	do{
		scanf("%i",&d);
		if(d==1){
			p= karteziehen();
			printf("Card: %i\n",p);
			psum+=p;
			printf("Current Sum: %i\n",psum);
		}
		
	}while(d!=0 && psum<21);
	
	if(psum>21){
		printf("You Lose\n");
		u=0;
	}
	
	// House
	if(u!=0){
		printf("House:\n");
		hsum+=h;
		printf("Card: %i\n",h);
		while(hsum<=16){
			h=karteziehen();
			hsum+=h;
			printf("Card: %i\n",h);
			printf("Sum: %i\n",hsum);
		}
		if(hsum>21){
			printf("Player Win\n");
		}else{
			if(hsum==psum){
				printf("draw\n");
			}else if(hsum<psum){
				printf("Player Win\n");
			}else{
				printf("House Win\n");
			}
		}
	}
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
