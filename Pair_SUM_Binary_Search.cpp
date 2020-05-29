#include <bits/stdc++.h>
#include <stack>
using namespace std;

int binarysearch(int arr[], int l, int r, int val){
    if(r >= l){
        int mid = l + (r-l)/2;
        if(arr[mid] == val) 
            return arr[mid];
        else if(arr[mid] > val) 
            return binarysearch(arr, l, mid-1, val);
        return binarysearch(arr, mid+1, r, val);
    }
    return -1;
}

void Pair_Sum(int arr[], int n, int value) 
{ 
    // sort the array, it takes O(nlogn) time 
    sort(arr, arr+n);

    // flag checks if there exists any pair with sum equal to value
    int flag = 0;

    for(int i=0;i<n;i++){ // choose an element from the given array

        int first = arr[i]; // choose first element

        // check if there exist an element equal to residue i.e., (value - first) 
        bool check = binarysearch(arr, i, n-1, value - first);

        if(check != -1){
            flag = 1;
            cout << arr[i] << " " << check << endl;
        }
    }

    // if there is no such pair with sum equal to value then print -1
    if(flag == 0)
        cout << "-1\n";
} 

int main(){

}