#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n;
	cin>>t;
	string s="";
	for(int i=0;i<t;i++)
	{
		cin>>n;
		vector<int> a(n);
		for(int j=0;j<n;j++)
		cin>>a[i];
		sort(a.begin(),a.end());
		
		int p=n;
		int index=0;
		int tur=n-1;
		if(n>=2)
		{
			
		   
		//turtle will choose indexes from the start 
		// piggy will choose from end
		bool turtle=true;
		while(p!=1)
		{
			if(turtle)
			{
				a[tur]=max(a[tur],a[tur+1]);
				tur--;
				p--;
			}
			else
			{
				a[tur]=min(a[tur],a[tur+1]);
				tur--;
				p--;
			}
			turtle=!turtle;
	    }
	    tur++;
		}
		cout<<a[tur]<<endl;
		    
	}
	return 0;
}


