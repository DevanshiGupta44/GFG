//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

vector<int> square(int arr[], int n);


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n+1];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        vector<int> ans;
        ans = square(arr, n);
        for(int i:ans)
            cout << i << " ";
        cout << endl;
        
    }
    return 0;
}

// } Driver Code Ends



vector<int> square(int arr[], int n)
{
    // Complete the function
    sort(arr,arr+n);
    int area=0,count=0;
    for(int i=0;i<n;i++)
    {
        if(i+3<n&&arr[i]==arr[i+3])
        {
            if(area==arr[i]*arr[i+3])
                count++;
            else
            {
                area=arr[i]*arr[i+3];
                count=1;
            }
            i=i+3;
        }
    }
    if(count==0)
        return {-1};
    return {area,count};
}