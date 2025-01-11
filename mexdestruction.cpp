//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{	
//    int t;
//	cin>>t;
//	int n;
//	for(int j=0;j<t;j++)
//	{	
//	    cin>>n;
//	    vector<int>v(n);int c=0;
//	    for(int i=0;i<n;i++)
//	    {
//	    	cin>>v[i];
//	    	if(v[i]==0)
//	    	c++;
//		}
//		if(c==n)
//		cout<<0<<endl;
//		else if(c==0 || (c==1 && (v[0]==0 || v[n-1]==0)) )
//		cout<<1<<endl;
//		else if(c==1)
//		cout<<2<<endl;
//		else 
//        {
//        	if(v[0]==0 && v[n-1]==0 && c==2)
//        	{
//        		// obviously n>2
//        		cout<<1<<endl;
//			}
//			else if(v[0]==0 && v[n-1]==0 && c>2)
//			{
//				cout<<2<<endl;
//			}
//			else if(v[0]==0 || v[n-1]==0 && c>1)
//			cout<<2<<endl;
//			else if(c>1 && v[0]!=0 || v[n-1]!=0)
//			{
//				cout<<2<<endl;
//			}
//		}
//	    
//	}
//	return 0;
//}
//
//
#include <bits/stdc++.h>
using namespace std;

int main() {	
    int t;
    cin >> t;
    for (int j = 0; j < t; j++) {	
        int n;
        cin >> n;
        vector<int> v(n);
        int c = 0; 

        for (int i = 0; i < n; i++) {
            cin >> v[i];
            if (v[i] == 0) c++;
        }

        if (c == n) {
            cout << 0 << endl;
        } else if (c == 0 || (c == 1 && (v[0] == 0 || v[n - 1] == 0))) {
            cout << 1 << endl; 
        } else {
            int start = 0, end = n - 1;
            while (start < n && v[start] == 0)
			start++;
            while (end >= 0 && v[end] == 0) 
			end--;

            bool singleBlock = true;
            for (int i = start; i <= end; i++) {
                if (v[i] == 0) {
                    singleBlock = false;
                    break;
                }
            }

            cout << (singleBlock ? 1 : 2) << endl; 
        }
    }
    return 0;
}

