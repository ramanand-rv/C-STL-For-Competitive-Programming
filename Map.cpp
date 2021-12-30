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
#define E end()
#define B begin()


void print(map<int, string> &m){
	cout<<sz(m)<<endl;
	for(auto &pr: m){		// O( log(n) )
		cout<<pr.F<<" "<<pr.S<<nline;
	}
}

int main() {

map<int, string> m;
m[1] = "abc";		//O( log(n) )
m[2] = "efg";
m[3] = "hij";
m[4] = "xyz";

m.insert({2, "dcv"});

/*
for map<string, string> m;
m["gvscw"] = "hsdvbgc"; 	// s.size * lon(n)  || s is the key string

*/

// for(auto it = m.B; it != m.E; it++){
// 	cout<<it->F<<" "<<it->S<<endl;
// }
	print(m);

/*
	auto it = m.find(55);
	// auto it = m.find(3); 		// //O( log(n) )
	if (it==m.E){
		cout<<"No Value"<<nline;
	}
	else{
		cout<<nline<<it->F<<" "<<it->S;
	}

*/
	// erase using key
	m.erase(2);	//O( log(n))
	print(m);

	//erase using iterator
	auto it = m.find(3);
	// m.erase(it);
	// print(m);

	// erasing m.end() gives error Therefore use safety check
	if(it != m.E){
		m.erase(it);
	}
	print(m);

	m.clear();	//clears map
	print(m);

}