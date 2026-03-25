#pragma once
#ifndef __DynamicArray_H__
#define __DynamicArray_H__

class DynamicArray
{
public:
	//DynamicArray()
	//{
	//	Size = 0;
	//	Capacity = 1;
	//	Data = new int[Capacity];
	//}

	//생성자 오버로딩
	DynamicArray(int InitialCapacity = 10)
	{
		Size = 0;
		Capacity = InitialCapacity;
		Data = new int[InitialCapacity];
	}

	~DynamicArray()
	{
		delete[] Data;
		Data = nullptr;
	}

	//[][][][][][]
	//  ^         
	void PushBack(int InValue)
	{
		//PushBack 알고리즘
		Size++;

		int* NewData = nullptr;
		//Cursor > Capacity
		//저장 공간 늘리기
		if (Size > Capacity)
		{
			Capacity = Capacity * 2;
			NewData = new int[Capacity];
			//2. 원본복제
			for (int i = 0; i < Size - 1; ++i)
			{
				NewData[i] = Data[i];
			}

			//4. 원래 있건걸 지운다.
			delete[] Data;

			//5. 원래 데이터의 포인터에 새 데이터 포인터 연결
			Data = NewData;
		}
		//Cursor <= Capacity
		//그냥 추가

		//3. 새로 들어온값을 넣는다.
		Data[Size - 1] = InValue;


	}

	//함수 뒤에 const readonly 함수임
	inline size_t GetSize() const
	{
		return Size;
	}

	inline size_t GetCapacity() const
	{
		return Capacity;
	}

	//operator overload
	const int& operator[](int Index) const
	{
		if (Index < 0 || Index > Size)
		{
			return 0;
		}

		return Data[Index];
	}


	// 0  1  2  3
	//[1][2][3][4] -> [1][2][4] [4]
	void RemoveAt(int RemoveIndex)
	{
		if (RemoveIndex >= Size || RemoveIndex < 0)
		{ 
			return;
		}

		for (int i = RemoveIndex; i < Size - 1; ++i)
		{
			Data[i] = Data[i + 1];
		}

		Size--;
	}

protected:
	int* Data;
	size_t Size = 0;
	size_t Capacity = 1;
};

//class FVector
//{
//public:
//	FVector();
//	~FVector();
//
//	FVector operator+(const FVector& RHS)
//	{
//		return FVector();
//	}
//};

#endif //__DynamicArray_H__