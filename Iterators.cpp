#include<bits/stdc++.h>
using namespace std;


int main() {
/*
std::vector<int> v = {2, 3, 5, 6, 7};
for (int i = 0; i < v.size(); ++i)
{
	cout<<v[i]<<" ";
}

cout<<endl;
vector<int> :: iterator it = v.begin();
// cout<< (*(it+1))<<endl;

for (it = v.begin(); it != v.end(); ++it)
{
	cout<<(*it)<<endl;
}
*/
	vector <pair<int, int>> v = {{1, 2}, {3, 4}, {5, 7}, {12, 43}};
	vector<pair<int, int>> :: iterator it = v.begin();

	// for (it = v.begin(); it != v.end(); ++it)
	// {
	// 	cout<<(*it).first<<" "<<(*it).second<<endl;
	// }

	for (it = v.begin(); it != v.end(); ++it)
	{
		cout<<(it->first)<<" "<<(it->second)<<endl;
	}

	// *(it).first is same as (it->first)

return 0;
}