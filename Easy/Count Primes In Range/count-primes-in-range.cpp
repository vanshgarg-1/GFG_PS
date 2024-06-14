//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int countPrimes(int L, int R) {
        // code here
        bool sieve[R+1];
        for(int i=0;i<=R;++i){
            if(i==0 || i==1) sieve[i] = false;
            else sieve[i] = true;
        }
        
        for(int i=2;i*i<=R;++i){
            if(sieve[i]){
                for(int j=i*i;j<=R;j+=i){
                    sieve[j] = false;
                }
            }
        }
        
        int cnt = 0;
        for(int i=L;i<=R;++i){
            if(sieve[i]) cnt++;
        }
        
        return cnt;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int L, R;
        cin >> L >> R;
        Solution ob;
        int ans = ob.countPrimes(L, R);
        cout << ans << "\n";
    }
}
// } Driver Code Ends