#include<bits/stdc++.h>
using namespace std;


void Search2DMatrix1(int** mat, int n, int m, int k){
	// code to traverse the whole matrix
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			// if the element is found
		if(mat[i][j] == k){
			cout << "Found";
			return;
			}
		}
	}
	// if the element is not found
	cout << "Not Found";
	return;
}