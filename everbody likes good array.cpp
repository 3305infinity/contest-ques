//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{	
//    int t,row,col,k;
//	cin>>t;
//	int n;
//	for(int j=0;j<t;j++)
//	{	
//	    cin>>n;
//	    int odd=0;
//	    int even=0;
//	    vector<int>v(n);
//	    vector<int>p(n);
//	    for(int i=0;i<n;i++)
//	    {
//	    	cin>>v[i];
//	    	if(v[i]%2==0)
//	    	p[i]=0;
//			else
//			p[i]=1;
//	    }
//	    int c=0;
//	    for(int i=1;i<n;i++)
//	    {
//	    	if(p[i-1]==1 && p[i]==1)
//	    	c++;
//	    	else if(p[i-1]==0 && p[i]==0)
//	    	c++;
//		}
//		cout<<c<<endl;	    
//	}
//	return 0;
//}
//
//

#include<bits/stdc++.h>
using namespace std;
int main()
{	
ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
	cin>>t;
	 int n;
	for(int j=0;j<t;j++)
	{
		cin>>n;
		vector<int>a(n);
		int max=0;int min=0;
		int one=0;int zero=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]==0)
			zero++;
			if(a[i]==1)
			one++;
		}
		if(one%2==0 && zero%2==0)// both even
		{
				min=0;
				max=zero;
		}
		else
		{
				min=1;
				if(one<=zero)
				max=one;
				else
				max=zero;
		}
		cout<<min<<" "<<max<<endl;
	}
		return 0;
}


