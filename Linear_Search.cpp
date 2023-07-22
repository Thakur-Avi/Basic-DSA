// C++ program to implement Linear Search

#include <bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int N, int x){
	for (int i = 0; i < N; i++){
		if (arr[i] == x) return i;
    }
	return -1;
}

// Driver code
int main(){
	int arr[] = {2, 6, 12, 17, 45, 75, 97};
	int n = size(arr);
	int x = 12;
	int ind = linearSearch(arr,n, x);
	if(ind == -1) cout<<"Element not Found!";
    else cout<<"Element found at Index : "<<ind;
	return 0;
}