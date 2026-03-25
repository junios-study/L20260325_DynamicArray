#pragma once
#ifndef __DynamicArray_H__
#define __DynamicArray_H__

#include <stdexcept>

template<typename FirstType>
class DynamicArray
{
public:
	DynamicArray(int InitialCapacity = 10)
	{
		Size = 0;
		Capacity = InitialCapacity;
		Data = new FirstType[InitialCapacity];
	}

	~DynamicArray()
	{
		delete[] Data;
		Data = nullptr;
	}

	void PushBack(const FirstType& InValue)
	{
		Size++;

		FirstType* NewData = nullptr;
		if (Size > Capacity)
		{
			Capacity = Capacity * 2;
			NewData = new FirstType[Capacity];

			//memcpy()
			//memmove()
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


	const FirstType& operator[](int Index) const
	{
		if (Index < 0 || Index > Size)
		{
			//throw std::out_of_range("ÀÎµ¦½º°¡ ¹üÀ§¸¦ ¹þ¾î³²");
			throw std::exception("ÀÎµ¦½º°¡ ¹üÀ§¸¦ ¹þ¾î³²");
		}

		return Data[Index];
	}

	void RemoveAt(int RemoveIndex)
	{
		if (RemoveIndex >= Size || RemoveIndex < 0)
		{ 
			throw std::out_of_range("ÀÎµ¦½º°¡ ¹üÀ§¸¦ ¹þ¾î³²");
		}

		//memmove()
		for (int i = RemoveIndex; i < Size - 1; ++i)
		{
			Data[i] = Data[i + 1];
		}

		Size--;
	}

	void Clear()
	{
		Size = 0;
	}

protected:
	FirstType* Data;
	size_t Size = 0;
	size_t Capacity = 1;
};

#endif //__DynamicArray_H__