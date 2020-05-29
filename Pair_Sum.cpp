#include <iostream>
#include <stack>
using namespace std;

void Pair_Sum(int arr[], int n, int value) 
{ 
    // flag checks if there exists any pair with sum equal to value
    int flag = 0;

    for(int i=0;i<n;i++){ // choose an element from the given array

        for(int j=i+1;j<n;j++){ // inner loop to choose a pair

            if(arr[i] + arr[j] == value){

                // here flag denotes there exits a pair with sum equal to value
                flag = 1;

                cout << arr[i] << " " << arr[j];
            }
        }
    }

    // if there is no such pair with sum equal to value then print -1
    if(flag == 0)
        cout << "-1\n";
} 

int main(){

}