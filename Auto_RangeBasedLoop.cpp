#include<bits/stdc++.h>
using namespace std;


#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define nline "\n"
#define pb push_back
#define pob pop_back
#define mp make_pair
#define F first
#define S second
#define B begin
#define E end
#define PI 3.141592653589793238462
#define countBits(x) __builtin_popcount(x)
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define mt make_tuple
#define eb emplace_back
#define np next_permutation
#define prio priority_queue
#define ll long long int
#define vi vector<ll, ll> 
#define pii pair<ll, ll>
typedef unsigned long long ull;
typedef long double lld;


int main() {
/*
vector<ll> v ={2, 3, 4, 5, 6, 7, 8, 11, 12};
for(ll &value : v){
	// cout<<value<<" ";
	value++;
}
for(ll value : v){
	cout<<value<<endl;
}

*/

	
	vector<pii> vp = {{1, 2}, {3, 4}, {5, 6}};
	for(auto value : vp){
		cout<<value.F<<" "<<value.S<<endl;
	}

cout<<nline;

	vector<ll> v = {1, 2, 3, 4, 5, 55, 6, 7, 8, 99};
	for(auto it = v.B(); it != v.E(); it++){
		cout<<(*it)<<nline;
	}


return 0;
}