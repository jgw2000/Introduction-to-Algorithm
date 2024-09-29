#pragma once
#include <vector>
using namespace std;

void insertion_sort(vector<int>& A)
{
	for (int i = 1; i < A.size(); ++i)
	{
		int key = A[i];
		// Insert A[i] into the sorted subarray A[0:i-1]
		int j = i - 1;
		while (j >= 0 && A[j] > key)
		{
			A[j + 1] = A[j];
			--j;
		}
		A[j + 1] = key;
	}
}