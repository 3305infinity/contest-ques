#include <bits/stdc++.h>
using namespace std;
bool isblocked(int i,string a,string b)
{
    int n=a.length();
	int prev=i-1;
	int next=i+1;
	if(prev<0 && next<n && b[next]==1 || prev>=0 && b[prev]==1 && next<n && b[next]==1 || prev>0 && next>=n && b[prev]==1 )
	return true;
	else
	return false;
}
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
		cin>>n;
		string a,b;
		cin>>a>>b;
		map<int,int>ma;
		map<int,int>mb;
		for(int i=0;i<n;i++)
		{
			ma[a[i]-'0']++;
			mb[b[i]-'0']++;
		}
		if(ma[1]>mb[0])
		{
			cout<<"NO"<<endl;
			continue;
		}
		if(ma[0]==n || mb[0]==n)
		{
			cout<<"YES"<<endl;
			continue;
		}
		bool flag=true;
		for(int i=0;i<n;i++)
		{
			if(a[i]=='1' && (i-1>0 && a[i-1]!='0') && i+1<n && a[i+1]!='0' )
			{
			    if(isblocked(i,a,b))
			{
				flag=false;break;
			}
			}
		}
		if(flag==false)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
}
