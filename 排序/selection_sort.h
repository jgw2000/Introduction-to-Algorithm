#pragma once
#include <vector>
using namespace std;

/*
时间复杂度
最坏情况：O(n²)  平均情况：O(n²)

空间复杂度 O(1）

不稳定排序

适用情况：任何情况下时间复杂度都是 O(n²), 因此不建议使用
*/
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
