//Find number of component using dfs
#include<bits/stdc++.h>
using namespace std;
//O(n+e)
void dfs(int root,vector<int> adj[] , vector<bool> &visited){
  if(visited[root]) return;
  else{
    visited[root] = true;
    for(auto child : adj[root])
      dfs(child,adj,visited);
  }
}
int main(){
  int nodes,edges,component=1;
  cin>>nodes>>edges;
  vector<int> adj[nodes+1];
  vector<bool> visited(nodes+1);//default false
  //Build Graph
  for(int i=1;i<=edges;i++){
    int u,v;
    cin>>u>>v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }
  dfs(1,adj,visited);
  for(int i=1;i<=nodes;i++){
      if(!visited[i]){
        ++component;
        dfs(i,adj,visited);
      }
  }
  cout<<component<<endl;
}
