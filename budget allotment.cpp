#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long long n,k;
	    //count=0,sum=0,x;
	    cin>>n>>k;
	    vector<long long>a(n);
	    //long long a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    //sort(a,a+n);
	   sort(a.begin(),a.end(),greater<int>());
	   //for(int i=1;i<=n;i++)
	   long long count=0;
	   long long sum=0;
	    for(int i=0;i<n;i++){
	        sum+=a[i];
	       // if(sum<k*i)
	       if(sum<k*(i+1))
	        {
	            break;
	        }
	        count=i+1;
	        //count=i+1;
	        
	    }
	    cout<<count<<endl;
	}
	return 0;

}
