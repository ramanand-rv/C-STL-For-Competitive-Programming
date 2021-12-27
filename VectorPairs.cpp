#include<bits/stdc++.h>
using namespace std;

void printVector(vector<int> &v){
	int n = v.size();
	cout<<"Size: "<<n<<endl;
	for (int i = 0; i < n; ++i)
	{
		// cout<<v[i].first<<" "<<v[i].second<<endl;
		cout<<v[i]<<" ";

	}
}

int main()
{
/*
	vector<pair<int, int>> v; //= {{1, 2}, {3, 4}, {5, 6}, {7, 8}};
	// printVector(v);
	int n;
	cin>>n;
	for (int i = 0; i < n; i++)
	{
		int x, y;
		cin>>x>>y;
		v.push_back({x, y});
		// v.push_back(make_pair(x, y));
	}
	printVector(v);
	
*/

/*
	int n;
	cin>>n;

	vector<int> v[n];	// Vector of arrays
	for (int i = 0; i < n; ++i)
	{
		int x;
		cin>>x;
		for (int j = 0; j < x; ++j)
		{
			int y;
			cin>>y;
			v[i].push_back(y);

		} 
	} 

	for (int i = 0; i < n; ++i)
	{
		printVector(v[i]);
	}
	*/

	vector<vector<int>> v;
	int n;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		int x;
		cin>>x;
		vector<int> temp;
		for (int i = 0; i < x; ++i)
		{
			int y;
			cin>>y;
			temp.push_back(y);
		}
		v.push_back(temp);
	}
	v[2].push_back(69);
	v.push_back(vector<int> ());
	

	for (int i = 0; i < v.size(); ++i)
	{
		printVector(v[i]);
	}

return 0;

}