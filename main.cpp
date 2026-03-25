#include <iostream>
#include <vector>
#include "DynamicArray.h"

using namespace std;

template<typename T, typename Y>
class Data
{
public:
	T InnerData;
	Y SecondData;

	T GetData()
	{
		return InnerData;
	}

	Y GetSecondData()
	{
		return SecondData;
	}

};

//class Data
//{
//public:
//	float InnerData;
//	int SecondData;
//
//	float GetData()
//	{
//		return InnerData;
//	}
//
//	int GetSecondData()
//	{
//		return SecondData;
//	}
//
//};



int main()
{
	Data<float, int> IntData;

	IntData.InnerData = 10;
	IntData.SecondData = 3.5f;
	
	IntData.GetData();
	IntData.GetSecondData();




	return 0;
}
