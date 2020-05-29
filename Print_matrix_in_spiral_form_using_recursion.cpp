#include<iostream>
using namespace std;

int** mat;


void form_spiral(int n, int m){
	
}



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
	//form_spiral(n, m);
}