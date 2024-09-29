#pragma once
#include <vector>
using namespace std;

/*
时间复杂度
最坏情况：O(n²)  平均情况：O(n²)

空间复杂度 O(1）

稳定排序

适用情况：任何情况下时间复杂度都是 O(n²), 因此不建议使用
*/
void bubble_sort(vector<int>& A)
{
	for (int i = 0; i < A.size(); ++i)
		for (int j = A.size() - 1; j >= i + 1; --j)
			if (A[j] < A[j - 1])
				swap(A[j], A[j - 1]);
}