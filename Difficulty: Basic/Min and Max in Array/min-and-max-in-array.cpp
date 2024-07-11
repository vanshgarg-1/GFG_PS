//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    pair<long long, long long> getMinMax(vector<long long int> arr) {
        long long a,b;
        a=b=arr[0];
        for(int i=0;i<arr.size();i++){
            if(a>arr[i])
            {
                a=arr[i];
            }
            if(b<arr[i])
            {
                b=arr[i];
            }
        }
        pair<long long,long long> ans;
        ans.first = a;
        ans.second = b;
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<long long int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        pair<long long, long long> pp = ob.getMinMax(arr);
        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}
// } Driver Code Ends