#include <iostream>
#include <vector>
#include "DynamicArray.h"

using namespace std;

class FVector2D
{
public:
	FVector2D(int InX = 0, int InY = 0) : X(InX), Y(InY)
	{

	}
	int X;
	int Y;

	void Add(FVector2D RHS)
	{
		X = X + RHS.X;
		Y = Y + RHS.Y;
	}

	//operator overloading
	FVector2D operator+(FVector2D RHS)
	{
		FVector2D New;
		New.X = X + RHS.X;
		New.Y = Y + RHS.Y;

		return New;
	}

	
};



int main()
{
	FVector2D A;

	DynamicArray<int> IntArray;

	IntArray.PushBack(1);
	IntArray.PushBack(2);
	IntArray.PushBack(3);
	IntArray.PushBack(4);


	//만들어 봤다. 난 모르겠다 넘겨.
	//STL 사용만 하면 됨


	for (DynamicArray<int>::Iterator iter = IntArray.begin(); iter != IntArray.end(); iter++)
	{
		cout << *iter << endl;
	}

	for (auto Data : IntArray)
	{
		cout << Data << endl;
	}

	//FVector2D First(0, 0);
	//FVector2D Second(2, 2);

	//FVector2D Three = First + Second; 

	//vector<int> IntVector;

	//IntVector.begin();
	//IntVector.end();

	//for (vector<int>::iterator iter = IntVector.begin(); iter.operator!=(IntVector.end()); iter.operator++())
	//{
	//	iter.operator*()
	//}

	



	//for (auto i : IntVector)
	//{

	//}



	return 0;
}

