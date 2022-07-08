#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "source.h"


int  main(void) 
{
printf("mean =%lf\n",mean("gau.dat"));

double temp=meansquare("gau.dat")-mean("gau.dat")*mean("gau.dat");

printf("variance=%lf\n",temp);
return 0;
}


