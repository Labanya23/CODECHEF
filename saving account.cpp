#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,a,b;
	    cin>>n>>a>>b;
	    int d=n*a;
	    if(d<=b){
	        cout<<0<<endl;
	    }
	    else{
	        //cout<<d/b<<endl;
	        
	        cout<<(d-b+a-1)/a<<endl;
	    }
	}
	return 0;

}
