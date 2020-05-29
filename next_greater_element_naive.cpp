#include <iostream>
#include <stack>
using namespace std;

void Next_Greater_Element(int arr[], int n) 
{ 
    int next;

    for (int i = 0; i < n; i++) { 

        // set next greater element to -1
        next = -1; 

        for (int j = i + 1; j < n; j++) 
        { 
            // if we find an element greater than current element
            // set next equal to arr[j] and break the loop
            if (arr[i] < arr[j]) 
            { 
                next = arr[j]; 
                break; 
            } 
        } 
        
        // print the next element 
        cout << next << " ";
    } 
} 

int main(){

}