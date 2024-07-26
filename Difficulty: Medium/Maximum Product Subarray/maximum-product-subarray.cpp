//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(vector<int> arr, int n) {
    long long product=1;long long ans=INT_MIN;
    for(int i=0;i<n;i++){
        product*=arr[i];
        ans=max(ans,product);
        if(product==0){
            product=1;
        }
    }
    //we traverse from back side also because first element may be negative also
    //so it will not be included
    product=1;
    for(int i=n-1;i>=0;i--){
        product*=arr[i];
        ans=max(ans,product);
        if(product==0){
            product=1;
        }
    }
    return ans;
}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<int> arr(n);
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends