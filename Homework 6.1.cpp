#include "Executor.h"

int main()
{
	int n = 8;
	double* arr = memory(n);
	fill(n, arr);
	out(n, arr);
	delet(arr);
}