//Bubble sort
#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int a[], int n){  
    int i, j, temp;  
    for(i = 0; i < n; i++){    
        for(j = i+1; j < n; j++){    
            if(a[j] < a[i]){    
                a[i]=a[i]+a[j];
                a[j]=a[i]-a[j];
                a[i]=a[i]-a[j];
            }     
        }     
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
    bubbleSort(arr, n);
	cout <<"\nSorted array:"<<endl;
    for( int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
	//printArray(arr, N);
	return 0;
}