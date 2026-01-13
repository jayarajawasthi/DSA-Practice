#include<bits/stdc++.h>
using namespace std;

void printName(int i, int number){
	if (i > number) return;
	cout<<"Hello"<<endl;
	printName(i+1, number);
}

int main()
{
	int n;
	cin >> n;
	printName(1, n);
}