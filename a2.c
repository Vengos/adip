#include <stdio.h>

// Gibt den Nachfolger des übergebenen Wertes zurück
int succ(int x) {
	return ++x;
}

// Gibt den Vorgänger des übergebenen Wertes zurück
int pre(int x) {
	return --x;
}

int add(int x, int y){
	while(y!=0){
		x=succ(x);
		y=pre(y);
	}
	return x;
}

int sub(int x, int y){
	while(y!=0){
		x=pre(x);
		y=pre(y);
	}
	return x;
}

int mult(int x, int y){
	int erg=0;
	while(y!=0){
		erg+= add(x,0);
		y=pre(y);
	}
	return erg;
}

int main (){
	printf("1. add\n");
	printf("2. sub\n");
	printf("3. mult\n");
	int d;
	scanf("%i", &d);
	
	if(d==1){
		int x;
		int y;
		printf("Geben Sie ein x ein: ");
		scanf("%i", &x);
		printf("Geben Sie ein y ein: ");
		scanf("%i", &y);
		printf("%i\n", add(x,y));
	}else if(d==2){
		int x;
		int y;
		printf("Geben Sie ein x ein: ");
		scanf("%i", &x);
		printf("Geben Sie ein y ein: ");
		scanf("%i", &y);
		printf("%i\n", sub(x,y));
	}else if(d==3){
		int x;
		int y;
		printf("Geben Sie ein x ein: ");
		scanf("%i", &x);
		printf("Geben Sie ein y ein: ");
		scanf("%i", &y);
		printf("%i\n", mult(x,y));
	}
	
	return 0;
}