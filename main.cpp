//Standart Template Library
#include <iostream>
#include <vector>
#include "DynamicArray.h"
#include "DynamicArray.h"

using namespace std;


//call by value를 이용한 call by reference 구현
//SwapA
//void Swap(int* A, int* B)
//{
//	int Temp = *A;
//	*A = *B;
//	*B = Temp;
//}

//name mangling
//SwapB
//function overloading
//call by reference, 문법이 지원
void Swap(int& A, int& B)
{
	int Temp = A;
	A = B;
	B = Temp;
}

//c언어 스타일
//call by value



int main()
{
	//int A1 = 2;
	//int B1 = 3;

	//Swap(A1, B1);
	//cout << A1 << ", " << B1 << endl;

	//return 0;

	std::vector<int> IntArray;

	IntArray.push_back(1);
	IntArray[0] = 1;

	DynamicArray OurArray;

	OurArray.PushBack(1);
	OurArray.PushBack(3);
	OurArray.PushBack(2);
	OurArray.PushBack(4);

	OurArray.GetSize();

	//OurArray[1] = 10;

	for (int i = 0; i < OurArray.GetSize(); ++i)
	{
		cout << OurArray[i] << endl;
		//cout << OurArray.operator[](i) << endl;
	}

	//FVector A;
	//FVector B;
	//A.operator+(B);
	//A + B;

	

	return 0;
}