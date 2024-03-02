//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
public:
    pair<long long, long long> getMinMax(long long a[], int n) {
        long long maxi = a[0];
        long long mini = a[0];
        
        for(int i=0;i<n;i++){
            if(a[i]>maxi){
                maxi = a[i];
            }
            else if(a[i]<mini){
                mini = a[i];
            }
        }
        
        pair<long long , long long> v;
        v.first = mini;
        v.second = maxi;
        return v;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        
        Solution ob;
        pair<long long, long long> pp = ob.getMinMax(a, n);
        
        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}
// } Driver Code Ends