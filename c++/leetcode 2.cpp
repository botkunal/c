#include <iostream>
using namespace std;

int TrailingZeros(int n)
{
	
	int zero = 0;
	for (int i=5; i<=n; i=i*5){
		zero = zero+n/i;
    }
	return zero;
}
int main()
{
	int n ;
    cin>>n;
	cout<< TrailingZeros(n);
	return 0;
}
