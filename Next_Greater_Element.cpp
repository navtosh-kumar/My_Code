#include <iostream>
#include <stack>
using namespace std;
int main(){
    int n, j;
    cin >> n;
    int a[n];

    //arr[i] stores Next greatest element for element with index i
    int arr[n];

    for(int i=0;i<n;i++){ 
        cin >> a[i];
    }
    stack<long> Stk;
    
    //pushing the first element
    Stk.push(0);
    
    for(int i=1;i<n;i++){
        //mark current element as next
        int next = i;  
        
        //comparing the Stk of the stack with next
        while(!Stk.empty() && a[Stk.top()]<a[next]){
            //if an element is less than next update arr of this element as next 
            arr[Stk.top()] = a[next];
            
            //and remove it from the stack
            Stk.pop();
        }
        //push the next(current) element in the stack
        Stk.push(next);
    }
    //update arr for all the remaining Stk as -1 as there is no arr exists for them
    while(!Stk.empty()){
        arr[Stk.top()] = -1;
        Stk.pop();
    }
    
    for(int i=0;i<n;i++){
        cout << a[i] << " " << arr[i] << endl;      //print arr for each element
    }
}