#include <stdio.h>

int main(){
		// a) 3,17459*10^-5
	int d;
	printf("1 fuer b)\n");
	printf("2 fuer c)\n");
	printf("3 fuer d)\n");
	printf("4 fuer d)\n");
	scanf("%d", &d);
	
	float floatarray[5];
	floatarray[0]= 10000;
	floatarray[1]= -0.001/9;
	floatarray[2]= 2500;
	floatarray[3]= 0.001/7;
	floatarray[4]= -12500;
	
	double doublearray[5];
	doublearray[0]= 10000;
	doublearray[1]= -0.001/9;
	doublearray[2]= 2500;
	doublearray[3]= 0.001/7;
	doublearray[4]= -12500;
	
	if(d==1){
		//b)
		float xges= 0;
		for(int i= 0; i<5; i++){
			xges+=floatarray[i];
			printf("%f\n", xges);
		}
		printf("Ergebnis: %f\n", xges);
	
	}else if(d==2){
		//c)
		double xges= 0;
		for(int i= 0; i<5; i++){
			xges+=doublearray[i];
		}
		printf("Ergebnis: %lf\n", xges);
		//d)
	}else if(d==3){
		float s=0;
		float d=0;
		float salt;
		
		for(int i=0 ; i<5; i++){
			salt=s;
			s=s+floatarray[i];
			d=d+(floatarray[i]-(s-salt));
			s=s+d;
			printf("%f\n",s);
		}
		printf("Ergebnis: %f\n",s);
	}
		//e) da sie genauer ist und bei der einfachen additionen 
		//genauigkeiten verloren gehen beim Vergleich der werte aus b) und d)
	else if(d==4){
		double s=0;
		double d=0;
		double salt;
		
		for(int i=0 ; i<5; i++){
			salt=s;
			s=s+doublearray[i];
			d=d+(doublearray[i]-(s-salt));
			s=s+d;
			printf("%lf\n",s);
		}
		printf("Ergebnis: %lf\n",s);
		
	}
	
	
	
	
	return 0;
}
