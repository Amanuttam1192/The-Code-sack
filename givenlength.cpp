
#include <iostream>
using namespace std;
//gfg code
int getTotalNumberOfSequences(int m, int n)
{
	
	
	if (m < n)
		return 0;

	if (n == 0)
		return 1;

	
	
	return getTotalNumberOfSequences(m - 1, n) +
		getTotalNumberOfSequences(m / 2, n - 1);
}

int main()
{
	int m = 10;
	int n = 4;
	cout << "Total number of possible sequences "
		<< getTotalNumberOfSequences(m, n);
	return 0;
}

