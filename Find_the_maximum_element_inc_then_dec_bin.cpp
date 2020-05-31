#include<bits/stdc++.h>
using namespace std;

int maximum_bin(int a[], int low, int high){

   // base case
   if (low == high)
      return a[low];

   // if subarray size is 2 then return maximum of those two
    if ((high == low + 1) && a[low] >= a[high])
      return a[low];
    if ((high == low + 1) && a[low] < a[high])
      return a[high];

   // else find mid element of the subarray
    // and compare it with its neighbours
    int mid = (low + high)/2;
    if ( a[mid] > a[mid + 1] && a[mid] > a[mid - 1])
      return a[mid];

   // if it is decresing then check left subarray
    if (a[mid] > a[mid + 1] && a[mid] < a[mid - 1])
      return maximum_bin(a, low, mid-1);
   // if it i increasing then check right subarray
    else
      return maximum_bin(a, mid + 1, high);
}