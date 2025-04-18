#include <bits/stdc++.h>
using namespace std;

int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        string p, s;
        cin >> p >> s;
        int n = p.size();
        int m = s.size();
//        vector<bool> dp(m + 1, false);
//        dp[0] = true;
//
//        for (int i = 0; i < n; ++i) {
//            vector<bool> new_dp(m + 1, false);
//            for (int j = 0; j <= m; ++j) {
//                if (dp[j]) {
//                    if (j < m && p[i] == s[j]) {
//                        new_dp[j + 1] = true;
//                    }
//                    if (j + 1 < m && p[i] == s[j] && s[j]==s[j + 1]) {
//                        new_dp[j + 2] = true;
//                    }
//                    
//                }
//            }
//            dp = new_dp;
//        }
//
//        if (dp[m]) {
//            cout << "YES"<<endl;
//        } else {
//            cout << "NO"<<endl;
//        }

          if(m<n || m>2*n )
          {
          	cout<<"NO"<<endl;
          	continue;
		  }
		  int i=0;int j=0;bool flag=false;
		  while(i<n && j<m )
		  {
		  	if(p[i]!=s[j])
		  	{
		  		flag=true;
				break;
			}
		  	int c1=0;
		  	int c2=0;
		  	char ch=p[i];
		  	while(i<n && p[i]==ch)
		  	{
		  		c1++;
				i++;
		  	}
		  	while(j<m && s[j]==ch)
		  	{
		  		c2++;
				j++;
			}
			if(c2<c1 || c2>2*c1)
			{
				flag=true;
				break;
			}
		  }
		  if(i!=n || j!=m )
		  {
		  flag=true;		  	
		  }
		  if(flag)
		  cout<<"NO"<<endl;
		  else
		  cout<<"YES"<<endl;
    }

    return 0;
}
