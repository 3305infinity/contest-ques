#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
		cin>>n;
		vector<int>v(n);
		for(int i=0;i<n;i++)
		{
			cin>>v[i];
		}	
		sort(v.begin(),v.end());
		int x=v[n-1];
		int y=v[0];
		int diff=x-y;
		cout<<diff<<endl;
		
	}
}
