#include<bits/stdc++.h>
using namespace std;

int maximum_lin(int a[], int low, int high){

    int max = a[low];    
    for (int i=low+1;i<=high;i++){

        if(a[i] > max){  
            max = a[i];
        }
        // if the element is smaller we can terminate the traversal
        // as every element after this will be smaller
        else break;  
    }
    return max;
}