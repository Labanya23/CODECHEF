#include<bits/stdc++.h>
#define int long long
using namespace std;
vector<int>traversal;
void dfs(int vertex,int parent,vector<int>*graph,vector<int>&dp,vector<int>&score)
{
  for(auto child : graph [vertex]){
if(child==parent)continue;
dfs(child,vertex,graph,dp_score);
dp[vertex]+=dp[child];
  }
dp[vertex]+=score[vertex];
traversal.push_back(vertex);
}
void solve()
{
  int n;
cin>>n;
vector<int>inDegree(n+1,0);
vector<int>graph[n+1];
vector<int>score(n+1);
for(int i=1;i<=n;i++){
cin>>score[i[;
  int m=n-1;
 while(m--){
int u,v;
cin>>u>>v;
graph[u].push_back(v);
graph[v].push_back(u);
inDegree[u]+=1;
inDegree[v]+=1;
 }
vector<int>dp(n+1,0);
int minn=INT_MAX;
intminnChild=-1;
for(int i=1;i<=n;i++)
  if(score[i]<minn){
minn=score[i[;
  minnChild=i;
  }
}
dfs(minnChild,-1,graph,dp,score);
int tot_case_a=0;
for(int i=1;i<=n;i++)
{
tot_case_a+=score[i];
}
tot_case_a=score[minnChild];
cout<<n-1<<endl;

for(auto itr: traversal){
if(itr == miniChild)continue;
cout<<itr<<  " ";
}
cout<<"\n";
return;
}
signed main()
{
  ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
int t;
cin>>t;
while(t--){
traversal.clear();
solve();
traversal.clear();
}
}
