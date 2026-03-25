#include <iostream>
#include <vector>
#include "DynamicArray.h"

using namespace std;




int main()
{
	DynamicArray<int> IntArray;

	IntArray.PushBack(1);
	IntArray.PushBack(2);
	IntArray.PushBack(3);

	for (int i = 0; i < IntArray.GetSize(); ++i)
	{
		cout << IntArray[i] << endl;
	}

	DynamicArray<float> FloatArray;

	FloatArray.PushBack(1.1f);
	FloatArray.PushBack(2.2f);
	FloatArray.PushBack(3.3f);

	for (int i = 0; i < FloatArray.GetSize(); ++i)
	{
		cout << FloatArray[i] << endl;
	}



	return 0;
}

