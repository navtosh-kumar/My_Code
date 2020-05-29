#include<bits/stdc++.h>
using namespace std;


void Search2DMatrix1(int** mat, int n, int m, int k){


	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(mat[i][j] == k){
				cout << "Found";
				return;
			}
		}
	}

	cout << "Not Found";
	return;

}






bool Search2DMatrix2(int mat[], int n, int m, int k){

	int left = 0; 
    int right = n - 1; 
    while (left <= right) { 
        int mid = left + (right - left) / 2; 
  
        // if element found return true 
        if (mat[mid] == k) 
            return true; 
  
        // if middle less than K then 
        // skip the left part of the 
        // array else skip the right part 
        if (mat[mid] < k) 
            left = mid + 1; 
        else
            right = mid - 1;
    } 
  
    // if not found return false 
    return false; 


}


bool SearchRow(int** mat, int n, int m, int k){

	int left = 0; 
    int right = m - 1; 
    while (left <= right) { 
        int mid = left + (right - left) / 2; 
  
        // if the element lies in the range 
        // of this row then call 
        // 1-D binary search on this row 
        if (k >= mat[mid][0] 
            && k <= mat[mid][n - 1]) 
            return Search2DMatrix2(mat[mid], n, m, k); 
  
        // if the element is less then the 
        // starting element of that row then 
        // search in upper rows else search 
        // in the lefter rows 
        if (k < mat[mid][0]) 
            right = mid - 1; 
        else
            left = mid + 1; 
    } 
  
    // if not found 
    return false;

}
