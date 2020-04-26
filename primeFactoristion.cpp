#include <bits/stdc++.h>
#define MAXN 100001
#define ll long long int
using namespace std;
//O(sqrt(n))
int numOfFactor(int n){
	int count = 0;
	  while (n % 2 == 0)  
    {  
       ++count;  
        n = n/2;  
    } 
    for (int i = 3; i <= sqrt(n); i = i + 2)  
    {   
        while (n % i == 0)  
        {  
            ++count;
            n = n/i;  
        }  
    }
    if(n>2) ++count;
    return count;
}
vector<int> factor(MAXN,-1);
void sievefactorisation(){
	for(ll i=2;i<=MAXN;i++){
		if(factor[i] == -1){
				for(ll j=i*i; j<=MAXN;j+=i){
					if(factor[j] == -1) factor[j] = i;
				}		
		}
	}
}
//O(logn)
void getFactorisation(int n){
		for(int i=n;i>1;){
			if(factor[i]==-1)cout<<i<<" ";
			else cout<<factor[i]<<" ";
			i /= factor[i];
		}		
}
int main(){
	sievefactorisation();
	getFactorisation(18);
	cout<<endl;
	getFactorisation(59150);
		
}
