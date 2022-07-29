//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template in C++

class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    long doUnion(int a[], int n, int b[], int m)  {
        //code here
        long i = 0, j = 0;
        long cnt=0;
    while (i < n && j < m) {
        if (a[i] < b[j])
            i++,cnt++;
        else if (b[j] < a[i])
            j++,cnt++;
        else {
            j++;
            i++;
            cnt++;
        }
    }

    while (i < n)
        i++,cnt++;
    while (j < m)
        j++,cnt++;

    return cnt;
    }

};

//{ Driver Code Starts.

int main() {

	int t;
	cin >> t;

	while(t--){

	    int n, m;
	    cin >> n >> m;
	    int a[n], b[m];

	    for(int i = 0;i<n;i++)
	       cin >> a[i];

	    for(int i = 0;i<m;i++)
	       cin >> b[i];
	    Solution ob;
	    cout << ob.doUnion(a, n, b, m) << endl;

	}

	return 0;
}
// } Driver Code Ends
