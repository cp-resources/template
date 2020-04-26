// Get Path between two vertices U and V using BFS
#include <bits/stdc++.h>
using namespace std;
#define nodes 1000
vector<int> path[nodes];
void getPath(vector<int> adjList[] , int source , int numNode){
	queue<pair<int,int>> q; //{node , parent}
	bool visited[numNode+1] = {false};
	q.push({source , -1});
	visited[source] = true;
	while(!q.empty()){
		pair<int,int> p = q.front();
		q.pop();
		visited[p.first] = true;
		for(auto child : adjList[p.first]){
			if(!visited[child]){
				q.push({child,p.first});
				path[child] = path[p.first];
				path[child].push_back(p.first);
			}
		}
	}
}
int main(){
	vector<int> adjList[6];
	adjList[1].push_back(2);
	adjList[1].push_back(3);
	adjList[2].push_back(1);
	adjList[2].push_back(4);
	adjList[2].push_back(5);
	adjList[3].push_back(1);
	adjList[4].push_back(2);
	adjList[5].push_back(2);
	getPath(adjList,1,6);
	for(int i=1;i<=5;i++){
		vector<int> r = path[i];
		cout<<"Path until"<<i<<": ";
			for(auto k : r)
				cout<<k<<" ";
	cout<<endl;
	}

}
