#include<bits/stdc++.h>
using namespace std;

bool Search2DMatrix2(int mat[], int n, int m, int k){

	int left = 0; 
    int right = n - 1; 
    while (left <= right) { 
        int mid = left + (right - left) / 2; 
  
        // if element found print "Found"
        // and return true
        if (mat[mid] == k){
        	cout << "Found";
            return true; 
        }
  
        // if mid element is less than check in right part
        // else check in left part
        if (mat[mid] < k) 
            left = mid + 1; 
        else
            right = mid - 1;
    } 
  
    // if 'k' is not found then print "Not Found"
    // and return false
    cout << "Not Found";
    return false;
}


bool SearchRow(int** mat, int n, int m, int k){

	int left = 0; 
    int right = m - 1; 
    while (left <= right) { 
        int mid = left + (right - left) / 2; 
  		// check if this row may contain 'k'
  		// if this condition holds true
  		// binary search the row to find 'k'
        if (k >= mat[mid][0] 
            && k <= mat[mid][n - 1]) 
            return Search2DMatrix2(mat[mid], n, m, k); 
  
        // if element is less then, search in upper rows
        // else search in lower row
        if (k < mat[mid][0]) 
            right = mid - 1;
        else
            left = mid + 1; 
    } 
  
    // if not found 
    return false;

}
