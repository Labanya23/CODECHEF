#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	int e=a*b*c;
	int p=pow(d,3);
	if(p<e){
	    cout<<"Cuboid"<<endl;
	}
	else if(p>e){
	    cout<<"Cube"<<endl;
	}
	else{
	    cout<<"Equal"<<endl;
	}
	return 0;

}
