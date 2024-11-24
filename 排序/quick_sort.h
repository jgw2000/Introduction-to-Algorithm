#pragma once
#include <vector>
using namespace std;

int partition(vector<int>& A, int p, int r)
{
    int x = A[r];
    int i = p - 1;
    for (int j = p; j < r; ++j)
    {
        if (A[j] <= x)
        {
            ++i;
            swap(A[i], A[j]);
        }
    }

    swap(A[i + 1], A[r]);
    return i + 1;
}

void quick_sort(vector<int>& A, int p, int r)
{
    if (p < r)
    {
        int q = partition(A, p, r);
        quick_sort(A, p, q - 1);
        quick_sort(A, q + 1, r);
    }
}