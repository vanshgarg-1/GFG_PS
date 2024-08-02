//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
double MedianOfArrays(vector<int>& array1, vector<int>& array2);


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    double MedianOfArrays(vector<int>& array1, vector<int>& array2)
    {
        int n1 = array1.size(), n2 = array2.size();
        int n = (n1+n2);
        //0 based count
        int ind2 = (n1+n2)/2;
        int ind1 = ind2-1;
        
        int ind1el = -1, ind2el = -1;
        
        int i=0, j =0, cnt = 0;
        
        while(i<n1 && j<n2){
            if(array1[i]<array2[j]){
                if(cnt==ind1) ind1el = array1[i];
                if(cnt==ind2) ind2el = array1[i];
                cnt++;
                i++;
            }
            else{
                //v2[j]<v1[i]
                if(cnt==ind1) ind1el = array2[j];
                if(cnt==ind2) ind2el = array2[j];
                cnt++;
                j++;
            }
        }
        //left out elements
        while(i<n1){
            if(cnt==ind1) ind1el = array1[i];
            if(cnt==ind2) ind2el = array1[i];
            cnt++;
            i++;
        }
        
        while(j<n2){
            if(cnt==ind1) ind1el = array2[j];
            if(cnt==ind2) ind2el = array2[j];
            cnt++;
            j++;
        }
        
        if(n%2==1) return ind2el;
        return (double)((double)(ind1el+ind2el))/2.0;
    
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        cin>>n;
        vector<int> array2(n);
        for (int i = 0; i < n; ++i){
            cin>>array2[i];
        }
        Solution ob;
        cout<<ob.MedianOfArrays(array1, array2)<<endl;
    }
    return 0; 
}



// } Driver Code Ends