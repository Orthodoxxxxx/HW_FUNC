#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 int scaned;
 double f, g;
int main()
{
	printf("Enter a number to calculate: ");
	scanf("%d",&scaned); 
	
	finalf=expf(-abs(scaned))*sin(scaned);
	finalg=expf(-abs(scaned))*cos(scaned);
	
	printf("f(x): %f\n", f);
	printf("g(x): %f\n", g);
	return 0;
}