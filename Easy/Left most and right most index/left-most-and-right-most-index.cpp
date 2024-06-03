//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    pair<long,long> indexes(vector<long long> a, long long x)
    {
        // code here
        pair<long,long> result;
        result.first = firstocc(a,x);
        result.second = lastocc(a,x);
        
        return result;
    }
    private:
    int firstocc(const std::vector<long long>& a, long long x) {
        int s = 0;
        int e = a.size() - 1;
        int ans = -1;

        while (s <= e) {
            int mid = s + (e - s) / 2;
            if (a[mid] == x) {
                ans = mid;
                e = mid - 1;  // Continue searching in the left half
            } else if (a[mid] < x) {
                s = mid + 1;  // Search in the right half
            } else {
                e = mid - 1;  // Search in the left half
            }
        }
        return ans;
    }

    int lastocc(const std::vector<long long>& a, long long x) {
        int s = 0;
        int e = a.size() - 1;
        int ans = -1;

        while (s <= e) {
            int mid = s + (e - s) / 2;
            if (a[mid] == x) {
                ans = mid;
                s = mid + 1;  // Continue searching in the right half
            } else if (a[mid] < x) {
                s = mid + 1;  // Search in the right half
            } else {
                e = mid - 1;  // Search in the left half
            }
        }
        return ans;
    }

};

//{ Driver Code Starts.

int main()
 {
    long long t;
    cin>>t;
    while(t--)
    {
        long long n, k;
        vector<long long>v;
        cin>>n;
        for(long long i=0;i<n;i++)
        {
            cin>>k;
            v.push_back(k);
        }
        long long x;
        cin>>x;
        Solution obj;
        pair<long,long> pair = obj.indexes(v, x);
        
        if(pair.first==pair.second and pair.first==-1)
        cout<< -1 <<endl;
        else
        cout<<pair.first<<" "<<pair.second<<endl;

    }
	return 0;
}

// } Driver Code Ends