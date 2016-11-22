#include <stdio.h>
#include <math.h>
float array_sum(float* value, int size);
float std_dev(float * set, int size);
int main()
{
	int size = 100, start = 0;
	float sum, mean;
	float onetohund[size];
	float * float_prt = &onetohund[0];
	for ( int i = 0; i < size; ++i)
	{
		onetohund[i] = i;
	}
	sum = array_sum(float_prt, size);
	mean = sum/size;
	printf("sum: %f\nmean: %f\nstd_dev: %f\n", sum, mean, std_dev(float_prt,size));

}

float array_sum(float * value, int size)
{
	float sum = 0;
	for( int i = 0; i < size; ++i)
	{
		sum += *value;
		++value;
	}
	return sum;
}
float std_dev(float * set, int size)
{
	float std_set[size];
	float mean = array_sum(set, size)/size, sum;
	for (int i = 0; i < size; ++i)
	{
		std_set[i] = (*set - mean) * (*set - mean);
		++set;
	}
	sum = array_sum(std_set,size);
	return sqrt(sum/((float)size -1));
}
