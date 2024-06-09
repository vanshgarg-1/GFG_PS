//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:

//Merge sort algorithm with one xtra line || easy || simple || c++ 
void merge(long long arr[],long long s,long long m,long long e,long long &cnt)
    {
        long long *temp = new long long[e-s+1];
        long long i=s; // first part
        long long j=m+1; //second part
        long long k=0; //for temp indexing
        
        while(i<=m && j<=e)
        {
            if(arr[i] > arr[j])
            {
                cnt+=m-i+1;
                temp[k++]=arr[j++];
            }
            else
                temp[k++]=arr[i++];
        }
        while(i<=m)
            temp[k++]=arr[i++];
        while(j<=e)
            temp[k++]=arr[j++];    
        
        k=0;
        for(int i=s;i<=e;)
        {
            arr[i++]=temp[k++];
        }
        delete [] temp;
    }
    void mergesort(long long arr[],long long s,long long e,long long &cnt)
    {
        if(s>=e)    return ;
        long long m= s+(e-s)/2;
        mergesort(arr,s,m,cnt);
        mergesort(arr,m+1,e,cnt);
        merge(arr,s,m,e,cnt);
    }
    
    
    long long int inversionCount(long long arr[], long long n)
    {
        // Your Code Here
        long long cnt=0;
        mergesort(arr,0,n-1,cnt);
        return cnt;
    }

};

//{ Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}

// } Driver Code Ends