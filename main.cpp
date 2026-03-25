//Standart Template Library
#include <iostream>
//random access, 추가 삭제 비용이 큼
#include <array>
#include <vector> //Container

//random access X, 추가 삭제 비용이 작음
#include <list>
#include <queue>

#include <algorithm>

using namespace std;

int main()
{
	std::array<int, 5> IntArray = { 1, 1, 1, 1, 1 };
	std::vector<int> IntDArray;
	std::list<int> IntList;

	IntDArray.push_back(2);
	IntDArray.push_back(1);
	IntDArray.push_back(4);
	IntDArray.push_back(3);

	IntList.push_back(2);
	IntList.push_back(1);
	IntList.push_back(4);
	IntList.push_back(3);
	
	//C++ 98, C++ 17
	//전체다 탐색 해
	std::sort(IntDArray.begin(), IntDArray.end());
	//for (auto i = IntDArray.begin(); i != IntDArray.end(); ++i)
	//{
	//	cout << *i << endl;
	//}


	//for (auto i = IntList.rbegin(); i != IntList.rend(); ++i)
	//{
	//	cout << *i << endl;
	//}
	//for (auto i : IntDArray)
	//{
	//	cout << i << endl;
	//}
	//for (auto i : IntArray)
	//{
	//	cout << i << endl;
	//}
	//for (auto i : IntList)
	//{
	//	cout << i << endl;
	//}

	//for (auto i = IntArray.begin(); i != IntArray.end(); ++i)
	//{
	//	cout << *i << endl;
	//}

	//iterator, 반복자, 포인터
	//IntList.begin();
	//IntList.end();
	//std::sort(IntList.begin(), IntList.end());
	IntList.sort();
	for (auto i = IntList.begin(); i != IntList.end(); ++i)
	{
		cout << *i << endl;
	}



	//iterator, 반복자, 포인터
	//IntList.begin();
	//IntList.end();
	//for (std::list<int>::iterator i = IntList.begin(); i != IntList.end(); ++i)
	//{
	//	cout << *i << endl;
	//}


	return 0;
}