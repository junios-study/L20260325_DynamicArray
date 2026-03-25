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
			//throw std::out_of_range("인덱스가 범위를 벗어남");
			throw std::exception("인덱스가 범위를 벗어남");
		}

		return Data[Index];
	}

	void RemoveAt(int RemoveIndex)
	{
		if (RemoveIndex >= Size || RemoveIndex < 0)
		{ 
			throw std::out_of_range("인덱스가 범위를 벗어남");
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


public:
	class Iterator
	{
	public:
		Iterator(FirstType* InPointer) : Pointer(InPointer)
		{
		}

		//전위증가
		Iterator& operator++()
		{
			Pointer++;
			return *this;
		}

		//후위증가
		Iterator operator++(int)
		{
			Pointer++;
			return Iterator(Pointer);
		}

		bool operator!=(const Iterator& Other)
		{
			return (Pointer != Other.Pointer);
		}

		FirstType& operator*()
		{
			return *Pointer;
		}

	protected:
		FirstType* Pointer;
	};

	Iterator begin()
	{
		return Iterator(Data);
	}

	Iterator end()
	{
		return Iterator(Data+Size);
	}
};

#endif //__DynamicArray_H__