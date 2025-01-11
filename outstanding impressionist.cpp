#include<bits/stdc++.h>
using namespace std;
int main()
{	
    int t;
	cin>>t;
	int n;
	while(t--)
	{	
	    int n;
	    cin>>n;
        int a[n][2];
        map<int,int>m;
		for(int i=0;i<n;i++)
		{
			cin>>a[i][0];
			cin>>a[i][1];
			int l=a[i][0];
			int r=a[i][1];
			if(l==r)
			m[l]++;	
		}
		string s(n,1);
		for(int j=0;j<n;j++)
		{
			
			int l=a[j][0];
			int r=a[j][1];
			int diff=r-l+1;
			if(diff==1)
			{
				if(m[l]>1)
				s[j]='0';
			}
			
			
		}
		cout<<s<<endl;
	}
	return 0;
}



