 #include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll                long long int
#define ld                long double
#define pb                push_back
#define mk                make_pair
#define in(i,a,n)         for(ll i=0;i<n;++i) cin>>a[i];
#define out(i,a,n)        for(ll i=0;i<n;++i) cout<<a[i]<<" ";
#define sz                size()
#define all(c)            c.begin(), c.end()
#define rall(c)           c.rbegin(), c.rend()
#define loop(i,a,b)       for(ll i=a;i<b;i++)
#define rloop(i,a,b)      for(ll i=a;i>b;i--)
#define F                 first
#define S                 second
#define deb(x) cout << #x << " " << x << endl
#define inf INT_MAX
const ll N = 100010;
const ll MOD = 1000*1000*1000+7;
ll mod(ll n) {
    return (n % MOD + MOD) % MOD;
}


#include <stdio.h>

int Last(int a[], int n, int target)
{
	// traverse the whole array
	int low = 0, high = n - 1;

	// initialize the res by -1
	int res = -1;

	// traverse the array
	while (low <= high){
		// find the mid index of the subarray we are searching
		int mid = (low + high)/2;

		// if mid value is equal to target
		// update and keep moving right to find further occurences
		if (target == a[mid]){
			res = mid;
			low = mid + 1;
		}
		// if the target is less move to the left subarray
		else if (target < a[mid]){
			high = mid - 1;
		}
		// if the target is more move to the right subarray
		else{
			low = mid + 1;
		}
	}

	// return the result
	return res;
}

int First(int a[], int n, int target)
{
	// traverse the whole array
	int low = 0, high = n - 1;

	// initialize the res by -1
	int res = -1;

	// traverse the array
	while (low <= high){
		// find the mid index of the subarray we are searching
		int mid = (low + high)/2;

		// if mid value is equal to target
		// update and keep moving left to find further occurences
		if (target == a[mid]){
			res = mid;
			low = mid - 1;
		}
		// if the target is less move to the left subarray
		else if (target < a[mid]){
			high = mid - 1;
		}
		// if the target is more move to the right subarray
		else{
			low = mid + 1;
		}
	}

	// return the result
	return res;
}

int main(void)
{
	int a[] = {2, 5, 5, 5, 6, 6, 8, 9, 9, 9};
	int n = sizeof(A)/sizeof(A[0]);

	int target = 5;

	int index = findLastOccurrence(A, n, target);

	if (index != -1)
		printf("First occurrence of element %d is found at index %d",
				target, index);
	else
		printf("Element not found in the array");

	return 0;
}