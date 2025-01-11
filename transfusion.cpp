#include<bits/stdc++.h>
using namespace std;
int main()
{	int t;
	cin>>t;
	while(t--)
	{	
	    int n;
	    cin>>n;
	    vector<int>a(n);
		long long int sum=0; long long int evensum=0; long long int oddsum=0;
	    for(int i=0;i<n;i++)
	    {
	    	cin>>a[i];
	    	if(i%2==0)//odd term
	    	{
	    		oddsum+=a[i];
			}
			if(i%2==1)
			{
				evensum+=a[i];
			}
	    	sum=sum+a[i];
		}
		if(sum%n==0)
		{
			int o=(n+1)/2;
			int e=n-o;
			sum=sum/n;
			if(sum*e==evensum && sum*o==oddsum)
			{
				cout<<"YES"<<endl;
				continue;
			}
		}
		cout<<"NO"<<endl;
		continue;
		
	}
	return 0;
}


