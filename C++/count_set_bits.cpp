// C++ program to Count set bits in an integer


#include <bits/stdc++.h>
using namespace std;


unsigned int countSetBits(unsigned int n)
{
	unsigned int count = 0;
	while (n) {
		count += n & 1;
		n >>= 1;
	}
	return count;
}

 
int main()
{
	int i = 9;
	cout << countSetBits(i);
	return 0;
}

// This code is contributed
// by Nikhil Kumar
