#include <iostream>
#include <stdlib.h>
#include<chrono>
using namespace std;

int main()
{
	int n = 0;
	cout << "" << endl;
	cin >> n;
	int* A = new int[n];

	auto start = chrono::steady_clock::now();
	for (int i = 0; i <= 0; i++)
	{
		A[i] = rand();

	}
	cout << endl << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j > 0 && A[j-1] > A[j]; j--)
		{
			swap(A[j - 1], A[j]);
		}
		auto end = chrono::steady_clock::now();
		auto diff = end - start;
		cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;


	}
}