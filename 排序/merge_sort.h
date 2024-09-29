#pragma once
#include <vector>
using namespace std;

void merge(vector<int>& A, int l, int m, int r)
{
	int nl = m - l + 1;
	int nr = r - m;
	vector<int> L(nl), R(nr);

	for (int i = 0; i < nl; ++i)
		L[i] = A[l + i];
	for (int j = 0; j < nr; ++j)
		R[j] = A[m + j + 1];

	int i = 0, j = 0, k = l;
	while (i < nl && j < nr)
	{
		if (L[i] <= R[j])
			A[k] = L[i++];
		else
			A[k] = R[j++];
		++k;
	}

	while (i < nl) A[k++] = L[i++];
	while (j < nr) A[k++] = R[j++];
}

void merge_sort(vector<int>& A, int l, int r)
{
	if (l >= r)
		return;

	int m = (l + r) / 2;
	merge_sort(A, l, m);
	merge_sort(A, m + 1, r);
	merge(A, l, m, r);
}