#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) 
	{
		int l,r,d,u;
		cin>>l>>r>>d>>u;
		int a=l*l+u*u;
		int b=u*u+r*r;
		int c=d*d+r*r;
		int e=l*l+d*d;
		if(a==b && a==c && a==e && (u+d)*(u+d)==(l+r)*(l+r))
		cout<<"yes"<<endl;
		else
		cout<<"No"<<endl;
    }
    return 0;
}

