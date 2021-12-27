#include<bits/stdc++.h>
using namespace std;

void printVector(vector<string>v){
	cout<<"Size: "<<v.size()<<endl;
for (int i = 0; i < v.size(); ++i)		// v.size() -> O(1)
{
	cout<<v[i]<<" ";
}
// v.push_back(69);
cout<<endl;
}

int main(){
	/*
	vector<int> v;
	int t;
	cin>>t;
	for (int i = 0; i < 5; ++i)
	{
		int x;
		cin>>x;
		v.push_back(x); 	//O(1)
		printVector(v);

	}
	// printVector(v);
	*/

	// vector<int> v(10);
	// v.push_back(69);		// pushes at last position
	// printVector(v);


/*
	vector<int> v(10, 3);
	// printVector(v);
	v.pop_back();		// pops last element
	vector<int> &v2 = v;	// --------> O(n) <--------
	
	v.pop_back();
	v.pop_back();

	cout<<"V"<<endl;
	printVector(v);

	cout<<"\nv2"<<endl;
	printVector(v2);

	*/

	vector<string> v;
	int n;
	cin>>n;
	for(int i =0; i< n; i++){
		string s;
		cin>>s;
		v.push_back(s);
	}

printVector(v);
	
}