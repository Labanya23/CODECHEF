#include<bits/stdc++.h>
using namesapce std;
int main(){
  int t;
cin>>t;
while(t--)
{
int n;
cin>>n;
vector<int>v;
for(int i=0;i<n;i++){
int c;
cin>>x;
v.push_back(x);
}
sort(v.begin(),v,end());
for(int i=0;i<n-1;i++){
if(v[i]>=v[i+1]){
v[i+1]=max(v[i],v[i+1])+1;
i--;
}
}
cout<<((v[n-1]<=n)?"YES" : "NO")<<endl;
}
  return 0;
}
