#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0;
    float farray[5] = {1000, -0.001/9, 2500, 0.001/7, -12500};
	double darray[5] = {1000, -0.001/9, 2500, 0.001/7, -12500};
    float fsum = 0;
    double dsum = 0;
    float fs = 0;
    float fd = 0;
    float fsAlt = 0;
    double ds = 0;
    double dd = 0;
    double dsAlt = 0;

    for(i= 0; i<5; i++)
    {
        fsum+=farray[i];
    }
    printf("Summe in float: %f\n", fsum);

     for(i= 0; i<5; i++)
    {
        dsum+=darray[i];
    }
    printf("Summe in double: %f\n", fsum);

    for( i=0 ; i<5; i++)
    {
        fsAlt=fs;
		fs=fs+farray[i];
		fd=fd+(farray[i]-(fs-fsAlt));
		fs=fs+fd;
    }
    printf("Ergebnis fuer S als float: %f\n",fs);

    for( i=0 ; i<5; i++)
    {
        dsAlt=ds;
		ds=ds+darray[i];
		dd=dd+(darray[i]-(ds-dsAlt));
		ds=ds+dd;
    }
    printf("Ergebnis fuer S als double: %f\n",fd);

    return 0;
}
