#pragma once
#include <vector>
using namespace std;

#define PARENT(i) (((i) - 1) / 2)
#define LEFT(i) (2 * (i) + 1)
#define RIGHT(i) (2 * (i) + 2)

void max_heapify(vector<int>& A, int k, int heap_size)
{
    int l = LEFT(k);
    int r = RIGHT(k);
    int largest = k;

    if (l < heap_size && A[l] > A[largest])
        largest = l;
    if (r < heap_size && A[r] > A[largest])
        largest = r;

    if (k != largest)
    {
        swap(A[k], A[largest]);
        max_heapify(A, largest, heap_size);
    }
}

void build(vector<int>& A)
{
    for (int k = PARENT(A.size() - 1); k >= 0; --k)
        max_heapify(A, k, A.size());
}

void heap_sort(vector<int>& A)
{
    build(A);
    for (int hs = A.size() - 1; hs > 0; --hs)
    {
        swap(A[0], A[hs]);
        max_heapify(A, 0, hs);
    }
}