#include<bits/stdc++.h>
using namespace std;


void merge(int arr[], int low, int mid, int high){
	// define size of both subarrays
	int n1 = mid - low + 1;
	int n2 = high - mid;

	int left[n1], right[n2];
	// create subarrays and copy elements from original array
	for(int i=0;i<n1;i++){
		left[i] = arr[low+i];
	}
	for(int i=0;i<n2;i++){
		right[i] = arr[mid + 1 + i];
	}
	// define 3 pointers
	// i points to the elements of first subarray
	// j points to the elements of second array
	// k keeps track of original array
	int i = 0, j = 0, k = low;
	// compare and rearrange elements
	while(i < n1 && j < n2){
		if(left[i] <= right[j]){
			arr[k] = left[i];
			i++;
		}
		else{
			arr[k] = right[j];
			j++;
		}
		k++;
	}
	// place the remaining elements into the original array
	while(i < n1){
		arr[k] = left[i];
		i++;
		k++;
	}

	while(j < n2){
		arr[k] = right[j];
		j++;
		k++;
	}
}


void mergeSort(int arr[], int low, int high){

	// Base Case
	if(low < high){

		// fixes range of both subarrays
		int mid = (low+high)/2;

		// sort first and second halves
		mergeSort(arr, low, mid);
		mergeSort(arr, mid+1, high);

		// merge both parts by comparing both parts
		merge(arr, low, mid, high);
	}
}


int main(){

	
}