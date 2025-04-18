#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        
        cin>>n;
		int maxi=0;vector<int>v(n);
        for(int i=0;i<n;i++)
        {
        	cin>>v[i];
        	maxi=max(maxi,v[i]);
		}
		bool ans=true;int y=0;int mindiff=0;
		for(int i=1;i<n;i++)
		{
			if(v[i]==v[i-1])
			{
				v[i]=0;
				
			}
		}
		cout<<(ans?"Yes":"No")<<endl;
    }
    return 0;
}

