//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

int Search(vector<int> ,int );

//User code will be pasted here

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        
        vector<int> vec(n);
        
        for(int i =0;i<n;i++) 
            cin >> vec[i];
        
        int target;
        cin >> target;
        
        cout << Search(vec,target) << "\n";
         
    }
}
// } Driver Code Ends


//User function template for C++

// vec : given vector of elements
// K : given value whose index we need to find 
int Search(vector<int> vec, int K) {
        
        int l = 0, h = vec.size() - 1;
        
        while (l <= h) {
            int m = l + (h - l) / 2;
            
            if (vec[m] == K) return m;
            else if (vec[m] >= vec[0]) {
                if (vec[m] < K or K < vec[0]) l = m + 1;
                else h = m - 1;
            }
            else { 
                if (K >= vec[0]) h = m - 1;
                else if (K > vec[m]) l = m + 1;
                else h = m - 1;
            }
        }
        
        return -1;
    }