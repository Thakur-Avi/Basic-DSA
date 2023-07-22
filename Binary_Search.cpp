// C++ program to implement Binary Search iteratively

#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int l, int r, int n){
	while (l <= r) {
		int m = l+(r-l)/2;
		if (arr[m] == n) return m;
		if (arr[m] < n) l = m+1;
		else r = m-1;
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