
#include <iostream>
using namespace std;

char extraChar(string strA, string strB)
{
	int res = 0, i;

	for (i = 0; i < strA.length(); i++) {

		res ^= int(strA[i]);
	}

	
	for (i = 0; i < strB.length(); i++) {
		res ^= int(strB[i]);
	}

	
	return ((char)(res));
}

int main()
{
	string strA;
	string strB;
    cin>>strA>>strB;
	cout << extraChar(strA, strB);
	return 0;
}
