https://hack.codingblocks.com/app/contests/2340/1040/problem

#include <iostream>
using namespace std;

int gcd(int a, int b)
{
	return b==0 ? a : gcd(b, a%b);
}

int main()
{
	int n1, n2;
	cin>>n1>>n2;
	cout<<gcd(n1, n2);
	// int start = min(n1, n2);
	// for(int i=start; i>=1; i--)
	// {
	// 	if(n1%i==0 and n2%i==0)
	// 	{
	// 		gcd = i;
	// 		break;
	// 	}
	// }
	// cout<<gcd;
    return 0;
}