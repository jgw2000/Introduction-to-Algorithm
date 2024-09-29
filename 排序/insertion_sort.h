#pragma once
#include <vector>
using namespace std;

/*
时间复杂度
最坏情况：O(n²)  平均情况：O(n²)

空间复杂度
O(1) 不需要额外的空间

稳定排序

适用情况：在元素数量比较少时速度很快
*/
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