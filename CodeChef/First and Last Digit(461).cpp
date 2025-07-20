//Given an integer N . Write a program to obtain the sum of the first and last digits of this number.

#include <iostream>
using namespace std;
typedef long long ll;

int main() {
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,last,first;
		cin>>n;
		last=n%10;  //cout << "Last digit: " << last << endl;
		while(n>=10)
		{
			n=n/10;
		}
		first=n;    //cout << "First digit: " << first << endl;
		cout<<last+first<<"\n";

	}
	return 0;
}
