//============================================================================
// Name        : vector with iter
// Author      : AMAN
// Version     :
// Copyright   : Your copyright notice

//============================================================================
#include<iostream>
#include<vector>
#include<iterator>
#include<string>
#include<algorithm>
using namespace std;

vector<int>::iterator it;

void print(vector<int> vec1)
{
	cout<<"vector is equal to ";
	for(iter=vec1.begin();iter != vec1.end();it++)
	{
		cout<<" "<<*it;
	}
}

int main()
{
	vector<int> vec1 ={11,33,55,22,66,88,90};

	sort (vec1.begin(),vec1.end());

	print(vec1);

	return 0;

}