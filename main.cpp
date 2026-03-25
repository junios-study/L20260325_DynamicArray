#include <iostream>
#include <vector>
#include "DynamicArray.h"

using namespace std;

int main()
{
	vector<int> D;


	try
	{
		cout << D.operator[](1) << endl;
	}
	catch(std::exception& e)
	{
		cout << e.what() << endl;
	}

	return 0;
}
