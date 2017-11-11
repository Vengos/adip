#include <stdio.h>

int main(){
	int n;
	double x;
	double xari=0;
	double s=0;
	printf("Groesse n der Stichprobe:\n");
	do{	
		scanf("%i",&n);
		if (n<2){
			printf("n muss groesser gleich 2 sein\n");
		}
	}while(n<2);
	
	double werte [n];
	
	printf("x eingeben:\n");
	for(int i=0; i<n; i++){
		scanf("%lf",&x);
		werte[i]=x;
	}
	
	for(int i=0; i<n; i++){
		xari+=werte[i]/n;
	}
		
	for(int i=0; i<n; i++){
		s+=((werte[i]-xari)*(werte[i]-xari))/(n-1);
	}
	
	printf("Arithmetisches Mittel: %lf\n",xari);
	printf("Stichporbenvarianz s^2: %lf\n",s);
}