#pragma once
#ifndef __DynamicArray_H__
#define __DynamicArray_H__

class DynamicArray
{
public:
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

	void PushBack(int InValue)
	{
		Size++;

		int* NewData = nullptr;
		if (Size > Capacity)
		{
			Capacity = Capacity * 2;
			NewData = new int[Capacity];

			for (int i = 0; i < Size - 1; ++i)
			{
				NewData[i] = Data[i];
			}

			delete[] Data;

			Data = NewData;
		}

		Data[Size - 1] = InValue;


	}


	inline size_t GetSize() const
	{
		return Size;
	}

	inline size_t GetCapacity() const
	{
		return Capacity;
	}


	const int& operator[](int Index) const
	{
		if (Index < 0 || Index > Size)
		{
			return 0;
		}

		return Data[Index];
	}

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

#endif //__DynamicArray_H__