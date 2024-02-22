//{ Driver Code Starts
// C++ program to remove recurring digits from
// a given number
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
public:
    // Function to find the leaders in the array.
    vector<int> leaders(int a[], int n) {
        vector<int> leadervector;
        int leader = a[n - 1];
        leadervector.push_back(leader);

        for (int i = n - 2; i >= 0; i--) {
            if (a[i] >= leader) {
                leader = a[i];
                leadervector.push_back(leader);
            }
        }

        int i = 0, j = leadervector.size() - 1, temp;
        while (i < j) {
            temp = leadervector[i];
            leadervector[i] = leadervector[j];
            leadervector[j] = temp;
            i++;
            j--;
        }

        return leadervector;
    }
};

//{ Driver Code Starts.

int main()
{
   long long t;
   cin >> t;//testcases
   while (t--)
   {
       long long n;
       cin >> n;//total size of array
        
        int a[n];
        
        //inserting elements in the array
        for(long long i =0;i<n;i++){
            cin >> a[i];
        }
        Solution obj;
        //calling leaders() function
        vector<int> v = obj.leaders(a, n);
        
        //printing elements of the vector
        for(auto it = v.begin();it!=v.end();it++){
            cout << *it << " ";
        }
        
        cout << endl;

   }
}

// } Driver Code Ends