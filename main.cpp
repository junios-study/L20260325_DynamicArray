//Standart Template Library
#include <iostream>
#include <vector>
#include "DynamicArray.h"
#include "DynamicArray.h"

using namespace std;



int main()
{
	std::vector<int> IntArray;

	DynamicArray OurArray;

	OurArray.PushBack(1);
	OurArray.PushBack(3);
	OurArray.PushBack(2);
	OurArray.PushBack(4);


	for (int i = 0; i < OurArray.GetSize(); ++i)
	{
		cout << OurArray.Data[i] << endl;
	}

	

	return 0;
}