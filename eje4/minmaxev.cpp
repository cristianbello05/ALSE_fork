#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>

using namespace std;

double *min_max(const double v[], const int &cant){

double min_max[2];
min_max[0] = v[0];
min_max[1] = v[0];

  for(int i=0; i < cant; i++){

	if(v[i] < min_max[0])
	  min_max[0] = v[i];

	if(v[i] > min_max[1])
	  min_max[1] = v[i];

  }

return min_max;

}
