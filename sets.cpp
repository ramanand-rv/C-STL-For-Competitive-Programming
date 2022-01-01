#include<bits/stdc++.h>
using namespace std;


#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define PI 3.141592653589793238462
#define countBits(x) __builtin_popcount(x)
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x)
#define eb emplace_back
#define np next_permutation#define INF 1e18.end()
#define mt make_tuple
#define nline "\n"
#define mp make_pair
#define F first
#define S second
#define prio priority_queue
#define ll long long int
#define pb push_back
#define pob pop_back
#define vi vector<ll, ll> 
#define pii pair<ll, ll>
typedef unsigned long long ull;
typedef long double lld;
#define B begin()
#define E end()
#define um unordered_map


void print(set <string> &s){
cout<<"Size: "<<sz(s)<<nline;
for(string value : s){
	cout<<value<<endl;
}


}

int main() {

set<string> s;
s.insert("abc");	// log(n)
s.insert("afsax");
s.insert("wbc");

print(s);
auto it = s.find("abc");	//log(n)
if(it != s.E){
	// cout<<(*it)<<nline;
	// s.erase("abc")
	s.erase(it);
}
print(s);



return 0;
}