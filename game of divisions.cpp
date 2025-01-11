
#include<bits/stdc++.h>
using namespace std;
int main()
{	int t;
	cin>>t;
	int n,k;
	while(t--)
	{	
		cin>>n;
		cin>>k;
		vector<int>a(n);
		for(int i=0;i<n;i++)
		cin>>a[i];
		map<int,int>m;int ans=0;int flag=0;
		if (n == 1) {
            cout << "NO" << endl;
            continue;
        }
//		for(int i=0;i<n;i++)
//		{
//			int rem=a[i]%k;
//			m[rem]++;
//		}
//		for(int i=0;i<n;i++)
//		{
//			int r=a[i]%k;
//			int o=k-r;
//			if(r!=o)
//			{
//				if(m.find(o)!=m.end())
//				{
//					ans=i;flag=1;break;
//				}
//			}
//			if(m[o]>1)
//			{
//				ans=i;flag=1;break;
//			}
//		}
        for (int i = 0; i < n ; i++) {
            for (int j = 0; j < n; j++) {
                if (i != j && abs(a[i] - a[j]) % k != 0) {
                    flag=1;
                    ans=i;
                    break;
                }
            }
        }
		if(flag==1)
		{
			cout<<"YES"<<endl;
			cout<<ans+1<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	    
		
		
	}
	return 0;
}



