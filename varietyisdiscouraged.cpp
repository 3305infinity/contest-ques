#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
    	int n;string s;
    	cin>>n;
    	vector<int>v(n);
    	map<int,int>m;
    	for(int i=0;i<n;i++)
    	{
    		cin>>v[i];
    		m[v[i]]++;
		}
		int maxc=0;int freqele=0;
		for(auto i:m)
		{
			if(i.second>maxc)
			{
				maxc=i.second;
				freqele=i.first;
			}
		}
		if(n==1)
		{cout<<"1 1"<<endl;
		    continue;
		}
		if(maxc==n)
		{
			cout<<0<<endl;continue;
		}
		int l=-1;int r=-1;
		int mlen=n-m.size();
		int len=0;
		for(int i=0;i<n;i++)
		{
			int tl=i;int tr=i;
			while(m[v[tr]]==1 && tr<n)
			{
				tr++;
			}
			i=tr;
			tr=tr-1;
			int dis=tr-tl+1;
			if(dis>=len && tl!=tr)
			{
				l=tl+1;r=tr+1;
				len=dis;
			}
		}
		cout<<l<<' '<<r <<endl;
	}
}
