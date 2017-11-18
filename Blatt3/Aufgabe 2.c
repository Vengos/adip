#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int getSize()
{
    int n = 0;
    printf("Anzahl von Zahlen eingeben:");
	scanf("%d", &n);
	return n;
}

int main()
{
    int i;
    int n = getSize();
	double average = 0;
	double variance = 0;
	double numbers [n];



	for(i=0; i < n; i++)
	{
	    printf("Zahl eingeben:\n");
		scanf("%lf",&numbers[i]);
    }


    for (i = 0; i < n; i++)
    {
        average = average + numbers[i];
    }

    average = average / (float)n;

    for (i = 0; i < n; i++)
    {
        variance = variance + pow((numbers[i] - average), 2);
    }

    variance = variance / n;

    printf("Arithmetisches Mittel = %.2f\n", average);
    printf("Stichporbenvarianz = %.2f\n", variance);

    return 0;
}
