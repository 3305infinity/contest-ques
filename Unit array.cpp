#include<bits/stdc++.h>
using namespace std;
int main()
{	int t,x;
	cin>>t;
	int n;
	while(t--)
	{	int sum=0,k=0;
		cin>>n;
		vector<int>v(n);
		map<int,int>m;
		for(int i=0;i<n;i++)	
		{
			cin>>v[i];
			m[v[i]]++;
			sum+=v[i];
		}    	
		int minus=m[-1];
		int plus=m[1];
		int ans=0;
	    if(sum>=0)//
         {
            if(minus%2==0)
            cout<<0<<endl;
            else
            cout<<1<<endl;
        }
        else
        {
        	while(sum<0)
        	{
        		k++;// how many times you converted the minus to plus 
        		sum=sum+2;
        		minus--;
			}
			if(minus%2==0)
            cout<<k<<endl;
            else
            cout<<k+1<<endl;
		}
	}
	return 0;
}
