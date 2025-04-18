#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) 
	{
		int n;
		cin>>n;
		vector<int>a(n),b(n);
		map<int,int>m_a;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			m_a[a[i]]++;
		}
		map<int,int>m_b;
		for(int i=0;i<n;i++)
		{
			cin>>b[i];
			m_b[b[i]]++;
		}
//		bool ans=false;
		map<int,int>m;
		vector<int>c(n);	
		for(int i=0;i<n;i++)
		{
			c[i]=a[i]+b[i];
			m[c[i]]++;
		}	
		if(m_a.size()>=2 && m_b.size()>=2 && n>2)
		cout<<"Yes"<<endl;
		else if(m_a.size()>=3 || m_b.size()>=3 )
		cout<<"Yes"<<endl;
		else
		cout<<"No"<<endl;
    }
    return 0;
}


