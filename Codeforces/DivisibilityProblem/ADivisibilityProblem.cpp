#include<bits/stdc++.h>
using namespace std;

int Divisibility(int a, int b)
{
	if (a % b == 0)
	{
		return 0;
	}
	else
	{
		if (a<b)
		{
			a = b-a;
			return a;
		}
		else
		{
			a = a % b;
			a = b - a;

			return a ;
		}
	}
}

int main()
{
	int t, a,b;
	cin>>t;
	for(int i=0; i<t; i++)
	{
		cin>>a>>b;
		cout<<Divisibility(a,b)<<endl;
	}
	
}
//if  b divides a  , then return 0
//else if b, a vanda thulo xa vane , a = b-a garne, yesto garda  a laai kati chaahiyo thyakkai divide huna tyo aauxa ra tyo ans hunxa
// else a = a/b garne, yesto garda remainder aauxa, ani remainder ta b vanda pakkai saano hunx ani b huna kati chahiyo baaki raheko remainder dekhi tyo calculate garna a = b-a garne