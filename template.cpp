#include <bits/stdc++.h>
using namespace std;
const int mod=1000000007;
using ll = long long int;
typedef pair<int,int> intpair;
typedef vector<int> vi;
typedef vector<string> vs;
inline int add(int a,int b){a+=b;if(a>=mod)a-=mod;return a;}
inline int mul(int a,int b){return (a*1ll*b)%mod;}
inline int pow(int a,int b){int rt=1;while(b>0){if(b&1)rt=mul(rt,a);a=mul(a,a);b>>=1;}return rt;}
inline bool sortinrev(const intpair &a,const intpair &b){return (a.first > b.first);} //sort pair in descending order
inline int ctoi(char c){return c-48;}
inline char itoc(int n){return n+'0';}  
int main(){
		ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
 
