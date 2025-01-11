
#include<bits/stdc++.h>
using namespace std;
int main()
{	int t,row,col,k;
	cin>>t;
	int n;
	for(int i=0;i<t;i++)
	{	
		cin>>n;
		cin>>k;
		vector<int>a(n);
		for(int i=0;i<n;i++)
		cin>>a[i];
		
	    if(is_sorted(a.begin(),a.end()))
		{
			cout<<"YES"<<endl;
			
		}
		else if(k>1)
		{
			cout<<"YES"<<endl;
					
		}
		else
		{
			cout<<"NO"<<endl;
			
		}
		
		
	}
	return 0;
}



