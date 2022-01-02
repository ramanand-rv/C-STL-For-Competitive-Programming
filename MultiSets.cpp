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
#define um unordered_map
#define us unordered_set


void print(multiset<string> &s){
	for(auto value: s){		// log(n)
		cout<<value<<endl;
	}
}

int main() {
multiset<string> s; 	// log(n)		// dupliacate values are allowed
s.insert("abc");
s.insert("pqr");
s.insert("xyz");
s.insert("zxc");

s.insert("abc");
s.insert("xyz");

print(s);
cout<<nline;
auto it = s.find("xyz");	// returns the iterator value of first encounter
if( it != s.E){
	s.erase(it);
}
print(s);

cout<<nline;
s.erase("abc");	// erases all the occurence of the given value
print(s);





}