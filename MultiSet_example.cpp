// Monk Loves Candies
/*

https://www.hackerearth.com/practice/data-structures/trees/heapspriority-queues/practice-problems/algorithm/monk-and-the-magical-candy-bags/

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
#define um unordered_map
#define us unordered_set
#define ms multiset


int main() {


int t;
cin>>t;

while(t--){

int n, k;
cin>>n>>k;
ms<long long> bags;
for(int i =0; i<n; i++){
	ll candies;
	cin>>candies;
	bags.insert(candies);
}

ll total_candies = 0;
for(int i = 0; i<k; i++){
	auto last_it = --bags.E;
	ll candies = *last_it;
	total_candies += candies;

	bags.erase(last_it);
	bags.insert(candies/2);

}

cout<<total_candies<<endl;



}

}