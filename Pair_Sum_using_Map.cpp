#include <bits/stdc++.h>
#include <stack>
using namespace std;


void Pairs_Sum(int arr[], int n, int Target_Sum) 
{ 
    // Store frequency of all elements in map
    unordered_map<int, int> mp; 
  
    // Iterate over all elements 
    for (int i = 0; i < n; i++){ 
  
        // Search if a pair can be formed with 
        int first = arr[i];
        int second = Target_Sum - arr[i];

        if (mp.find(second) != mp.end()){

            int freq = mp[second];

            for (int j = 0; j < freq; j++) 
                cout << first << "  " << second << endl;

        }
        mp[arr[i]]++;
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    Pairs_Sum(arr, n, 7);
}