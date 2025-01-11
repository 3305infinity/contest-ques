#include<bits/stdc++.h>
using namespace std;

int main()
{	int n;
    int t;
    cin>>t;
    int a,b;
	while(t--)
	{	
	   cin>>n;
	   vector<int>v(n);
	   int c=0;
	   long long int sum=0;
	   for(int i=0;i<n;i++)
	   {
	    	cin>>v[i];	   	    
	   }
	   map<long long int,long long int>m;
	   for(int i=0;i<n;i++)
	   {
	   	sum=sum+v[i];
	   	m[sum]++;
	   	if(m[sum]>1 || sum==0)
	   	{
	   		sum=0;
	   		m.clear();
	   		c++;
		}
	   }
	   cout<<c<<endl;
	}
	return 0;
}


