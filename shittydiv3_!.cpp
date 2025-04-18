#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) 
	{   int n;
        cin>>n;
        vector<int>v(n);
        map<int,int>m;
        for(int i=0;i<n;i++)
        {
        	cin>>v[i];
		}
		int ans=-1;
		
		for(int i=0;i<n;i++)
		{
			m[v[i]]++;
			if(m[0]>=3 && m[1]>=1 && m[2]>=2 && m[5]>=1 && m[3]>=1)
	     	{
			ans=i+1;
			break;
		    }
		}
		
		if(ans==-1)
		cout<<0<<endl;
		else
		cout<<ans<<endl;
        
	}    
    return 0;
}

