#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
    	int a,b,c;
    	cin>>a>>b>>c;
    	vector<int>v(c);
    	for(int i=0;i<c;i++)
		{
			cin>>v[i];						
		}	
		long long sum=0;
//		int amt=
		for(int i=0;i<c;i++)
		{
			if(v[i]>a)
			sum+=a;
			else
			sum+=v[i];
		}
		cout<<sum+b-1<<endl;
	}
}
