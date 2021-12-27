#include <bits/stdc++.h>
using namespace std;

int main(){
	pair<int, string> p;
	// p = make_pair(2, "abc");

	p = {2, "xyz"};
	pair<int, string> &p1 =p;	// use referencing instead of creating copy

	cout<<p.first<<" "<<p.second;
	cout<<endl;
	cout<<p1.first<<" "<<p1.second;
	cout<<endl;

	int a[] = {1, 2, 3, 4};
	int b[] = {5, 6, 7, 8};

	pair<int, int> pArray[4];
	pArray[0] = {1, 5};
	pArray[1] = {2, 6};
	pArray[2] = {3, 7};
	pArray[3] = {4, 8};

	for (int i = 0; i < 4; ++i)
	{
		cout<<pArray[i].first<<" "<<pArray[i].second<<endl;
	}

	cout<<endl;
	swap(pArray[0], pArray[3]);	//the pairs are swapped

	for (int i = 0; i < 4; ++i)
	{
		cout<<pArray[i].first<<" "<<pArray[i].second<<endl;
	}

	cin>>p1.first;
	cout<<p1.first;



}