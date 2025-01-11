#include<bits/stdc++.h>
//using namespace std;
//
//int main()
//{	
//    int t;
//	cin>>t;
//	int n;
//	while(t--)
//	{	
//	    cin>>n;
//		vector<int>v(n);
//	    for(int i=0;i<n;i++)
//	    {
//	    	cin>>v[i];
//		}
//		if(is_sorted(v.begin(),v.end()));
//		{
//			cout<<"YES"<<endl;
//			continue;
//		}
//		for(int i=0;i<n-1;i++)
//		{
//			if(abs(v[i+1]-v[i])==1)
//			{
//				swap(v[i],v[i+1]);
//			}
//			else
//			{
//				flag=1;break;
//			}
//		}
//		if(flag==1)
//		{
//			cout<<"NO"<<endl;continue;
//		}
//		else
//		cout<<"YES"<<endl;
//	}
//	return 0;
//}
using namespace std;

bool canSortPermutation(int n, vector<int>& p) {
    // Check if the permutation can be sorted by the given operation
    for (int i = 0; i < n - 1; ++i) {
        if (abs(p[i] - p[i + 1]) != 1) {
            return false;
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> p(n);
        for (int i = 0; i < n; ++i) {
            cin >> p[i];
        }

        // Check if the permutation is already sorted
        if (is_sorted(p.begin(), p.end())) {
            cout << "YES" << endl;
            continue;
        }

        // Check if the permutation can be sorted by the given operation
        if (canSortPermutation(n, p)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}

