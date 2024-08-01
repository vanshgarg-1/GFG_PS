//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void segregateElements(vector<int>& arr) {
        // Your code goes here
        vector<int> p,n;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>=0)
                p.push_back(arr[i]);
            else
                n.push_back(arr[i]);
            
        }
        int pi=0,ni=0;
        for(int i=0;i<arr.size();i++){
            if(pi<p.size())
                arr[i]=p[pi++];
            else
                arr[i]=n[ni++];
        }
        return;
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);

    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        Solution ob;
        ob.segregateElements(nums);

        for (int x : nums)
            cout << x << " ";
        cout << endl;
    }
}
// } Driver Code Ends