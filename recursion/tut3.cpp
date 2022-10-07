// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;

// Recursive function to find the last
// index of the given number K
int findIndex(int arr[], int idx, int K)
{

	// Base Case
	if (idx < 0)
		return -1;

	// Return Statement
	if (arr[idx] == K) {
		return idx;
	}

	// Recursive Call
	return findIndex(arr, idx - 1, K);
}

// Driver Code
int main()
{

	int arr[] = { 3, 1, 4, 4, 2, 3, 1 };
	int N = sizeof(arr) / sizeof(arr[0]);
	int K = 4;

	// Function call
	cout << findIndex(arr, N - 1, K);

	return 0;
}
