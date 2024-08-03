//wrong


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,d;
	    cin>>n>>d;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    int s=0;
	    bool g=true;
	    for(int i=0;i<n;i++){
	        if(a[i]<=d){
	            if(!g)
	            s++;
	        }
	        else if(a[i]>d){
	            if(g)
	            s++;
	        }
	    }
	    cout<<s<<endl;
	}
	return 0;

}
