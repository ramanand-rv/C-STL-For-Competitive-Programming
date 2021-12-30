/*
Given N strings, print unique strings in lexiograpghical order with their frequency
N <= 10^5
|s| <= 100
*/

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



int main() {
	map<string, int> m;
	int n;
	cin>>n;
	for(int i=0; i< n; ++i){
		string s;
		cin>>s;
		m[s]++;
	}
	for(auto pr: m){
		cout<<pr.F<<" "<<pr.S<<endl;
	}



}