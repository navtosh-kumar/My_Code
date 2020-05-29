#include<iostream>
#include<algorithm>
using namespace std;

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void wave_form(int a[], int n) 
{
    // Traverse all even elements
    for (int i=0;i<n;i+=2)
    {
        // If current even element is smaller than previous
        if (i>0 && a[i-1] > a[i]) 
            swap(&a[i], &a[i-1]); 
  
        // If current even element is smaller than next
        if (i<n-1 && a[i] < a[i+1]) 
            swap(&a[i], &a[i + 1]); 
    }
}


int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	wave_form(a, n);
	for(int i=0;i<n;i++){
		cout << a[i] << " ";
	}
}