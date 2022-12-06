#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "func.h"

int scaned;
int main()
{
	printf("Enter a number to calculate: ");
	scanf("%d",&scaned); 
	printf("\nScaned: %d\n", scaned);
	printf("f(x): %f\n", fcalc(scaned));
	printf("g(x): %f\n", gcalc(scaned));
	
        return 0;
}
