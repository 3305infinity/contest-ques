#include<bits/stdc++.h>
using namespace std;

int main()
{	
    int t;
	cin>>t;
	int n;
	while(t--)
	{	
	    cin>>n;
		vector<int>v(n);int c=0;map<int,int>m;
	    for(int i=0;i<n;i++)
	    {
	    	cin>>v[i];
	    	m[v[i]]++;
		}int h=0;
		for(int i=v[0];i>=1;i--)
	    {
	    	h=max(h,m[i]);	    		    	
		}
		cout<<n-h<<endl;
	}
	return 0;
}
