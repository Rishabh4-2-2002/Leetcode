//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    long maximumSumSubarray(int k, vector<int> &Arr , int N){
        long maxx=0;
        long sum=0;
        for(int i=0;i<N;i++)
        {
            if(i<k)
            {
                sum+=Arr[i];
                maxx=max(maxx,sum);
            }else{
                sum= sum +Arr[i] - Arr[i-k];
                maxx=max(maxx , sum );
            }
        }
        return maxx;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends