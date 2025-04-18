#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) 
	{   
	int n,x;
	cin>>n>>x;
	vector<int>v(n);
	for(int i=0;i<n;i++)
	cin>>v[i];
        sort(v.begin(),v.end());
//        int c=0;int sum=0;int mem=0;int ind=0;int p=1;
//        for(int i=0;i<n;i++)
//        {
//		     mem++;	
//        	if(v[i]>=x)
//        	{
//        		c+=(n-i);
//				break;
//			}
//			else if(mem*v[ind]>=x)
//			{
//				c++;mem=0;
//				p=
//			}
//        	
//		}
int ind=n;int c=0;
for(int i=0;i<n;i++)
{
	if(v[i]>=x)
	{
		c+=(n-i);
		ind=i;
		break;
	}
}
int mem=0;
for(int i=ind-1;i>=0;i--)
{
	mem++;
	if(mem*v[i]>=x)
	{
		c++;
		mem=0;		
	}
}

		cout<<c<<endl;
	}    
    return 0;
}

