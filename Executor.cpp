#include "Executor.h"

double* memory(int n)
{
	double* arr = new double[n];
	return arr;
}

void fill(int n, double* arr)
{
	for (int i = 0; i < n; i++)
		arr[i] = rand();
}

void out(int n, double* arr)
{
	for (int i = 0; i < n; i++)
		std::cout << arr[i] << " ";
	std::cout << "\n";
}

void delet(double* arr)
{
	delete[] arr;
}
