#include<iostream>
#include<cstdio>
#define L 200005
using namespace std;

int arr[100];

void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main() {

	int n, min, index;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	for (int i = 0; i < n - 1; i++) {
		int j = i;
		while (j >= 0 && a[j] > a[j + 1]) {
			swap(&a[j], &a[j + 1]);
			j--;
		}
	}

	for (int i= 0; i < n; i++) {
		cout << arr[i];
	}
	cout << "end";


	return 0;
}


