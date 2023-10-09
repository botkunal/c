/* C++ Program to find the smallest character
from the given set of letter, which is greater
than the target element */
#include <bits/stdc++.h>
using namespace std;

/* Returns the smallest character from the given
set of letters that is greater than K */

// In this code we consider only uppercase characters or only lowercase characters
// Incase if we have mixed characters then we
//convert all either into lowercase or uppercase
char nextGreatestAlphabet(vector<char>& alphabets, char K)
{
	int n= alphabets.size();
    cin>>n;
	if(K>=alphabets[n-1]) return alphabets[0];


	int l = 0, r = alphabets.size() - 1;

	// Take the first element as l and
	// the rightmost element as r
	int ans = -1;
	while (l <= r) {

		// if this while condition does not satisfy
		// simply return the first element.
		int mid = (l + r) / 2;
		if (alphabets[mid] > K)
		{
			r = mid - 1;
			ans = mid;
		}
		else
			l = mid + 1;
	}

	// Return the smallest element
	return alphabets[ans];
}

// Driver Code
int main()
{
	vector<char> letters{ 'A', 'K', 'S' };
	char K = 'L';

	// Function call
	char result = nextGreatestAlphabet(letters, K);
	cout << result << endl;
	return 0;
}
