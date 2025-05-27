#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int arr[n-1];
	int sum = (n*(n+1)/2);
	int sum1= 0;
	for (int i = 0; i < n-1; i++)
	// we have created array of size n-1, so we
	//have to loop till n-1 from i=0 not to n-2
	{
		cin >>arr[i];
		sum1 += arr[i];
	}

	int missingNumber = sum - sum1;
	cout<<missingNumber;

}