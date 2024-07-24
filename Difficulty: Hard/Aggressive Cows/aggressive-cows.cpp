//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
public:

    bool isPossible(vector<int> &stalls, int cows, int dist){
        
        int lastCow = 0;
        int no = 1;
        for(int i=1; i<stalls.size(); i++){
            
            if(stalls[i] - stalls[lastCow] >= dist){
                lastCow = i;
                no++;
            }
            
        }
        
        return no >= cows;
        
    }
    
    public:

    int solve(int n, int k, vector<int> &stalls) {
        
        // Step 1: Find the range of search space
        sort(stalls.begin(), stalls.end());
        int s = 1, e = stalls[n - 1] - stalls[0];
        int ans = -1;
        
        while(s <= e){
            
            int mid = s + (e - s) / 2;
            
            if(isPossible(stalls, k, mid)){
                ans = mid;
                s = mid + 1;
            }
            else
                e = mid - 1;
            
        }
        
        return ans;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input

        int n, k;
        cin >> n >> k;

        vector<int> stalls(n);
        for (int i = 0; i < n; i++) {
            cin >> stalls[i];
        }
        // char ch;
        // cin >> ch;

        Solution obj;
        cout << obj.solve(n, k, stalls) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends