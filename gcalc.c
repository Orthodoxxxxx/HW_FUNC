#include <stdio.h>
#include <math.h>

double gcalc(int x)
{
double finalg;
	finalg=expf(-abs(x))*cos(x);
return finalg;
}
