// selection sort
#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n){
	int i, j, m_id;
	for (i = 0; i < n-1; i++) {
		m_id = i;
		for(j = i+1; j < n; j++) {
			if (arr[j] < arr[m_id])
				m_id = j;
		}
        int temp;
		if(m_id != i)
            temp = arr[m_id];
			arr[m_id] = arr[i];
            arr[i] = temp;
	}
}

// Driver Code
int main(){
	int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
	int n = size(arr);
	cout<<"Array before Sorting : "<<endl;
    for( int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    selectionSort(arr, n);
	cout <<"\nSorted array:"<<endl;
    for( int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
	//printArray(arr, N);
	return 0;
}