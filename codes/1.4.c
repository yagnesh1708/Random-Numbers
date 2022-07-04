#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include"coeffs.h"

int main () {

double Var;

Var=squaremean("uni.dat")-(mean("uni.dat")*mean("uni.dat"));

printf("Mean = %lf\n",mean("uni.dat"));

printf("Variance=%lf\n",Var);
return 0;

}
