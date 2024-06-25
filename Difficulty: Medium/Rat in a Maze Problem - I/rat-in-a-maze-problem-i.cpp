//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    bool isSafe(vector<vector<int>> m, int n, int i, int j)
    {
        return (i<n && j<n && i>=0 && j>=0 && m[i][j]==1);
    }
    void solveMaze(vector<string>& str, string temp, vector<vector<int>> m, int n, int i, int j)
    {
        if(!isSafe(m,n,i,j)){
            return;
        }
        if(i==n-1 && j==n-1 && m[i][j]==1)
        {
            str.push_back(temp);
            return;
        }
        m[i][j] = 2; // used for marking this node as visited 
        solveMaze(str, temp+"D",m,n,i+1,j);
        solveMaze(str, temp+"U",m,n,i-1,j);
        solveMaze(str, temp+"L",m,n,i,j-1);
        solveMaze(str, temp+"R",m,n,i,j+1);
        m[i][j] = 1; // after recursions we mark this node again as not visited for different path traversal
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // backtracking 
        string temp = "";
        vector<string> str;
        solveMaze(str, temp, m, n, 0, 0);
        return str;
    }
};

    


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends