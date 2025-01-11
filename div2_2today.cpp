#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t,l1,r1,l2,r2;
	cin>>t;
	int n,m;
	string s="";
	int lock=0;
	while(t--)
	{	
		cin>>l1;
		cin>>r1;
		cin>>l2;
		cin>>r2;
		if(l1==l2&&r1==r2)
		{
			lock=r1-l1;
		}
		if(l1<l2 && r1<l2)
		{
			lock=l2-r1;
		}
		else if(l2<=r1&& l1<l2)
		{
			lock=r2-l2+1;
		}
		else if(l1>l2&&r1<=r2)//inside the interval
		{
			lock=r1-l1+2;
		}
		else if(r1>r2&&l1<r2)
		{
			lock=r1-r2;
		}
		
		else if(l2<l1 && r2<l1)
		{
			lock=l1-r2;
		}
		else if(l1<=r2&& l2<l1)
		{
			lock=r1-l1+1;
		}
		else if(l2>l1&&r2<=r1)//inside the interval
		{
			lock=r2-l2+2;
		}
		else if(r2>r1&&l2<r1)
		{
			lock=r2-r1;
		}
		
		cout<<lock<<endl;
	}
	return 0;
}


