#include<bits/stdc++.h>
using namespace std;


int a[] = {2, 1, 0, 1, 2, 0, 1, 2, 2, 2, 2};

/*void Sort_0_1_2(int a[], int n){

	// declare variables to store count of 0s 1s and 2s
	int count_zero = 0, count_ones = 0, count_twos = 0;

	// traverse the array to store the frequency of 0s 1s and 2s
	// in the array
	for(int i=0;i<n;i++){
		if(a[i] == 0) count_zero++;
		if(a[i] == 1) count_ones++;
		if(a[i] == 2) count_twos++;
	}

	int i = 0;
	// store 0s in the first count_zeros places in the array
	while(count_zero--){
		a[i] = 0;
		i++;
	}
	// store 1s in the first count_ones places in the array
	while(count_ones--){
		a[i] = 1;
		i++;
	}
	// store 2s in the first count_twos places in the array
	while(count_twos--){
		a[i] = 2;
		i++;
	}

}
*/

void Sort_0_1_2(int a[], int n)
{ 
    int low = 0, mid = 0, high = n-1; 
  
    // Iterate until all elements are sorted
    while(mid <= high) { 

    	// if curr element is 0
       	if(a[mid] == 0){
       		swap(a[low++], a[mid++]); 
            continue;
       	}	
       	// if curr element is 1
       	if(a[mid] == 1){
       		mid++; 
            continue;
       	}
       	// if curr element is 2
       	if(a[mid] == 2){
       		swap(a[mid], a[high--]);
       		continue;
       	}
    } 
} 


int main(){
	Sort_0_1_2(a, 11);
	for(int i=0;i<11;i++){
		cout << a[i] << " ";
	}
}