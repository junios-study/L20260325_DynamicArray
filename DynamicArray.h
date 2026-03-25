#pragma once
#ifndef __DynamicArray_H__
#define __DynamicArray_H__

class DynamicArray
{
public:
	DynamicArray()
	{
		Size = 0;
		Data = nullptr;
	}

	~DynamicArray()
	{
		delete[] Data;
		Data = nullptr;
	}

	void PushBack(int InValue)
	{
		Size++;
		//[1] -> [1][2]
		//1. 늘어남 영역 만큼 새로 할당
		int* NewData = new int[Size];

		//2. 원본복제
		for (int i = 0; i < Size - 1; ++i)
		{
			NewData[i] = Data[i];
		}

		//3. 새로 들어온값을 넣는다.
		NewData[Size - 1] = InValue;

		//4. 원래 있건걸 지운다.
		delete[] Data;

		//5. 원래 데이터의 포인터에 새 데이터 포인터 연결
		Data = NewData;

	}

	inline int GetSize()
	{
		return Size;
	}
//protected:
	int* Data;
	int Size = 0;
};

#endif //__DynamicArray_H__