#include <bits/stdc++.h>
#define pvar(x) cout<<#x<<":"<<x<<" "
using namespace std;
template < typename T >
ostream &operator << ( ostream & os, const vector< T > &v ) {
    os << "[";
    for(auto val : v)os<<val<<",";
    return os << "]";
}
template < typename FIRST , typename SECOND >
ostream &operator << ( ostream & os, const pair<	FIRST,SECOND > &p ) {
    os << "[ FIRST:"<<p.first<<", SECOND:"<<p.second;
    return os << "]";
}
template < typename KEY , typename VALUE >
ostream &operator << ( ostream & os, const map<	KEY,VALUE > &m ) {
    for(auto val : m){
					 os << "[ KEY:"<<val.first<<", VALUE:"<<val.second<<"]\n";
				}
   
    return os << "";
}
template < typename T >
ostream &operator << ( ostream & os, const set<T> &s ) {
    os << "[";
    for(auto val : s){
					 os<<val<<",";
				}
   
    return os << "]";
}
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
 
