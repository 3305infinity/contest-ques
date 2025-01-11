#include<bits/stdc++.h>
using namespace std;
int main()
{	
    int t;
	cin>>t;
	int n,k;
	while(t--)
	{	
	    cin>>n>>k;
	    vector<int>b(k);
	    vector<int>sums(k);
	    vector<int>c(k);
	    map<int,int>s;
		int sum=0;
	    for(int i=0;i<k;i++)
	    {
	    	cin>>b[i]>>c[i];
	    	s[b[i]]=0;
		}
		for(int i=0;i<k;i++)
	    {
	    	s[b[i]]+=c[i];
		}
		sort(b.begin(),b.end());
		sums.push_back(s[b[0]]);
		for(int i=1;i<k;i++)
		{
			if(b[i]!=b[i-1])
			{
				sums.push_back(s[b[i]]);
			}
		}
		sort(sums.begin(),sums.end());
		int ind=sums.size()-1;
		for(int i=1;i<=n && i<=k;i++)
		{
			sum=sum+sums[ind--];			
		}
		
		cout<<sum<<endl;
	    
	}
	return 0;
}



