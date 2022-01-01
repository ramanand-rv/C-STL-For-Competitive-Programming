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
#define B begin()
#define E end()

// Unordered_Map
// 1. inbuilt implementation -> use hash implementation instead of trees
// 2. time complexity -> O (1)
// 3. valid key data types


void print(unordered_map<int, string> m){
	cout<<"Size: "<<sz(m)<<endl;
	for(auto pr: m){	// O(1)
		cout<<pr.F<< " "<< pr.S<<endl;
	}
}

int main() {

	unordered_map<int, string> m;
	m[0] = "abc";	// O(1)
	m[1] = "bsc";
	m[2] = "xyz";
	m[3] = "plm";
	m[4] = "cc";

	print(m);

	auto it = m.find(4); 	// O(1)
	if(it != m.E){
		m.erase(it);	O(1)
	}
	print(m);


	// unordered_map<pair<int, int>, int> mp; -> error
	// No complex data types allowed since there is no HASH FUNCTION defined for them
	 








}