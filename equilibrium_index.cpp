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
#define multiply(x)  x*x*(x-=1)
#define inf INT_MAX
const ll N = 200010;
const ll MOD = 998244353;
ll mod(ll n) {
    return (n % MOD + MOD) % MOD;
}



/*int Equilibrium_Index(int a[], int n){

    // declare prefix sum array
    int prefix[n];

    // set prefix sum array
    for(int i=0;i<n;i++){
        if(i == 0) prefix[i] = a[i];
        else prefix[i] = a[i] + prefix[i-1];
    }

    // temp_sum is a temporary variable which stores
    // sum of all elements to the right of current index (inclusive)
    int right_sum = prefix[n-1];
    for(int i=0;i<n;i++){
      
        // sum of elements to the right of 'i'  
        right_sum -= a[i];
        // prefix[i+1] denotes the sum of elements to the left of 'i'
        int left_sum = prefix[i+1];
        if(right_sum == left_sum)
            return i+1;
    }
    return -1;
}*/


int Equilibrium_Index(int a[], int n){

    // initialize sum of whole array
    int total_sum = 0;

    // initialize leftsum   
    int left_sum = 0;   
  
    // store the sum of whole array
    for (int i = 0; i < n; ++i)  
        total_sum += a[i];  
  
    for (int i = 0; i < n; ++i){

        // update total_sum
        total_sum -= a[i];

        // sum is now right sum for index i   
        int right_sum = total_sum;
  
        if (left_sum == right_sum)  
            return i;  
  
        left_sum += a[i];  
    }  
    return -1;  
}




// 1  2  3   4   3   2   1
// 1  3  6  10  13  15  16
//    15 13 10







 
void solve(){
    int a[] = {1, 2, 3, -4, 3, 2, 1};
    cout << Equilibrium_Index(a, 7) << endl;
}

int main(){
    ll T=1;
    //cin >> T;
    for(int i=0;i<T;i++) solve();
}