#include<iostream>
using namespace std;

int** mat;
int* spiral;



void form_spiral(int row_start, int col_start, int row_end, int col_end) 
{ 
    // If row_start or col_start lies outside the matrix 
    if (row_start >= row_end or col_start >= col_end) 
        return; 
  
    // Print First Row 
    for (int p = row_start; p < col_end; p++) 
        cout << mat[row_start][p] << " "; 
  
    // Print Last Column 
    for (int p = row_start + 1; p < row_end; p++) 
        cout << mat[p][col_end - 1] << " "; 
  
    // Print Last Row, if Last and 
    // First Row are not same 
    if ((row_end - 1) != row_start) 
        for (int p = col_end - 2; p >= col_start; p--) 
            cout << mat[row_end - 1][p] << " "; 
  
    // Print First Column,  if Last and 
    // First Column are not same 
    if ((col_end - 1) != col_start) 
        for (int p = row_end - 2; p > row_start; p--) 
            cout << mat[p][col_start] << " "; 
  
    form_spiral(row_start + 1, col_start + 1, row_end - 1, col_end - 1); 
} 


/*void form_spiral(int n, int m){

	int row_start = 0, col_start = 0, row_end = n, col_end = m;

	while(row_start < row_end && col_start < col_end){

		for(int j=col_start;j<col_end;j++){
			cout << mat[row_start][j] << " ";
		}
		row_start++;

		for(int j=row_start;j<row_end;j++){
			cout << mat[j][col_end-1] << " ";
		}
		col_end--;

		if(row_start < row_end){
			for(int j=col_end-1;j>=col_start;j--){
				cout << mat[row_end-1][j] << " ";
			}
			row_end--;
		}

		if(col_start < col_end){
			for(int j=row_end-1;j>=row_start;j--){
				cout << mat[j][col_start] << " ";
			}
			col_start++;
		}
	}
}
*/

int main(){
	int n, m;
	cin >> n >> m;
	mat = new int*[n];
	for(int i=0;i<n;i++){
		mat[i] = new int[m];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin >> mat[i][j];
		}
	}
	spiral = new int[n*m];
	form_spiral(0, 0, n, m);
	
}