#pragma once
#include <vector>
using namespace std;

void selection_sort(vector<int>& A)
{
	for (int i = 0; i < A.size() - 1; ++i)
	{
		// Find smallest element in A[i:n) and exchange with A[i].
		int k = i;
		for (int j = i + 1; j < A.size(); ++j)
		{
			if (A[j] < A[k])
				k = j;
		}
		swap(A[i], A[k]);
	}
}
