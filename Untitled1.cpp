//#include <bits/stdc++.h>
//using namespace std;
//int main() 
//{
//    
//}
// C++ Code to find the maximum number of elements 
// that can be selected using Sliding Window
#include <bits/stdc++.h>
using namespace std;

int maxElements(vector<int> &a, int k) {
    int n=a.size();
    unordered_map<int,int>m;
    int l=0;int c=0;
    int len=0;
    for(int r=0;r<n;r++)
    {
    	m[a[r]]++;
    	while(m.size()<k)
    	{
    		m[a[l]]--;
    		if(m[a[l]]==0)
    		m.erase(a[l]);
    		l++;
    		
		}
		if(m.size()<=k)
		{
			len=maxlen(r-l+1,len);
		}
	}
	return len;
}

int main() {
    
    vector<int> arr = {1, 2, 2, 3, 1, 4};
    int k = 2;
    
    cout << maxElements(arr, k) << endl;

    return 0;
}

