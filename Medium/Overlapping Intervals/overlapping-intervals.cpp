//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
     vector<vector<int>> overlappedInterval(vector<vector<int>>& v) {
         // Code here
         sort(v.begin(), v.end());
         vector<vector<int>> v1;
         vector<int> r={v[0][0],v[0][1]};
         for(int i=1;i<v.size();i++){
             if(v[i][0]<=r[1]){
                 if(v[i][1]>=r[1]){
                     r={r[0],v[i][1]};
                 }
             }
             else{
                 v1.push_back({r[0],r[1]});
                 r={v[i][0],v[i][1]};
             }
         }
         v1.push_back({r[0],r[1]});
         
         return v1;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>Intervals(n);
		for(int i = 0; i < n; i++){
			int x, y;
			cin >> x >> y;
			Intervals[i].push_back(x);
			Intervals[i].push_back(y);
		}
		Solution obj;
		vector<vector<int>> ans = obj.overlappedInterval(Intervals);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
		}
		cout << "\n";
	}
	return 0;
}
// } Driver Code Ends