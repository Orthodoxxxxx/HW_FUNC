#include <stdio.h>
#include <math.h>

double fcalc(int x)
{
double finalf;
	finalf=expf(-abs(x))*sin(x);
return finalf;
}
