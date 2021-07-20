#include<cstdio>
#include <iostream>

using namespace std;

int a[1000];

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void quickSort(int start, int end) {
    if (start >= end) return;
    int key = start, i = start + 1, j = end, temp;
    while (i <= j) { // 엇갈릴 때까지 반복합니다. 
        while (i <= end && a[i] <= a[key]) i++;
        while (j > start && a[j] >= a[key]) j--;
        if (i > j) swap(&a[key], &a[j]);
        else swap(&a[i], &a[j]);
    }
    quickSort(start, j - 1);
    quickSort(j + 1, end);
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    quickSort(0, n - 1);
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    system("pause");
    return 0;
}
