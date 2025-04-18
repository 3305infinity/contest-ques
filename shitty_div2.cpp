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
		vector<int>even;
		vector<int>odd;
		for(int i=0;i<n;i++)
		{
			cin>>v[i];
			if(v[i]%2==0)
			even.push_back(v[i]);
			else
			odd.push_back(v[i]);
		}	
		sort(even.begin(),even.end());
		sort(odd.begin(),odd.end());
		int el=even.size();
		int ol=odd.size();
		if(even.empty())
		{
			cout<<odd[ol-1]<<endl;
			continue;
		}
		if(odd.empty())
		{
			cout<<even[el-1]<<endl;
			continue;
		}
		if(!even.empty() && !odd.empty())
		{
			int x1=even[el-1]+odd[0];
			int x2=x1;
		for(int i=1;i<ol;i++)
		x1+=odd[i];
		for(int i=1;i<el;i++)
		x2+=even[i];
		
		int y1=odd[ol-1]+even[0];
		int y2=y1;
		for(int i=1;i<el;i++)
		y1+=even[i];
		for(int i=1;i<ol;i++)
		y2+=odd[i];
		
		cout<<max(x1,max(x2,max(y1,y2)))<<endl;	
		}
		
	}
}
