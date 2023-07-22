// C++ program to implement Binary Search recursively
#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int l, int r, int x) {
	if (r > 0) {
		int m = l + (r-l)/2;
		if (arr[m] == x) return m;
		if (arr[m] > x) return binarySearch(arr, l, m-1, x);
		return binarySearch(arr, m+1, r, x);
	}
	return -1;
}

// Driver code
int main(){
	int arr[] = {2, 6, 12, 17, 45, 75, 97};
	int n = size(arr);
	int x = 12;
	int ind = binarySearch(arr, 0, n-1, x);
	if(ind == -1) cout<<"Element not Found!";
    else cout<<"Element found at Index : "<<ind;
	return 0;
}