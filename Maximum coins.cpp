#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x;
	    cin>>n>>x;
	    int coins=0;
	    for(int j=n;j>0;j--){
	        if(x>0){
	            x-=1;
	            coins+=pow(2,j);
	        }
	        else{
	            coins-=pow(2,j);
	        }
	    }
	    cout<<coins<<endl;
	}
	return 0;

}
