#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define nxt "\n"
#define intpair pair<int,int>
using namespace std;
bool vis[500][500], flag=true;
int X[]={-1,0,1,0};//up,left,down,right
int Y[]={0,1,0,-1};
bool isValid(int x,int y,int row,int col){
	if(x>=0 && x<row && y>=0 && y<col)return true;
	else return false;
}
void dfs(int x,int y,vector<vector<char>> &v,int row,int col){
	if(v[x][y]=='S' || v[x][y]=='D')return;
	vis[x][y] = true;
	for(int i=0;i<4;i++){
		int dx = x+X[i];
		int dy = y+Y[i];
		bool valid = isValid(dx,dy,row,col);
		if(valid && v[x][y]=='W' && v[dx][dy]=='S')flag = false;
		if(flag && valid && !vis[dx][dy]){   //	if(flag && valid && !vis[dx][dy])
			if(v[dx][dy]== 'S' && v[x][y]=='.'){
				v[x][y]='D';
			}
			else dfs(dx,dy,v,row,col);
		}
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int r,c;
	cin>>r>>c;
	vector<vector<char>> a(r);
	char val;
	vector<pair<int,int>> root;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>val;
			if(val == 'W')root.push_back({i,j});
			a[i].push_back(val);
		}
	}
	for(auto e : root){
		memset(vis,false,sizeof(bool)*2500);
		dfs(e.first,e.second,a,r,c);
	}
	if(!flag)cout<<"No\n";
	else{
		cout<<"Yes"<<endl;
		for(int i=0;i<r;i++){
			for(int j=0;j<c;j++){
				cout<<a[i][j];
			}
			cout<<endl;
		}
	}

}

