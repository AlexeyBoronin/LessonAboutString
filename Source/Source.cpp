#include <iostream>
#include <cassert>
#include<string>
using namespace std;
//class DynArray
//{
//    int* arr;
//    int size;
//
//public:
//    DynArray(int sizeP)
//        : arr{ new int[sizeP] {} }, size{ sizeP }
//    {
//        std::cout << "DynArr constructed for " << size
//            << " elements, for " << this << '\n';
//    }
//    DynArray() : DynArray(5) {}
//    DynArray(DynArray& object) = delete;
//    DynArray& operator=(DynArray& object) = delete;
//    DynArray(DynArray&& object)
//        : arr{ object.arr }, size{ object.size }
//    {
//        object.arr = nullptr;
//        object.size = 0;
//        std::cout << "DynArr move constructed for "
//            << size << " elements, for " << this
//            << '\n';
//    }
//    DynArray& operator=(DynArray&& object)
//    {
//        if (!(this == &object))
//        {
//            delete arr;
//            arr = object.arr;
//            size = object.size;
//            object.arr = nullptr;
//            object.size = 0;
//        }
//        std::cout << "DynArr move assigned for "
//            << size << " elements, for " << this
//            << '\n';
//        return *this;
//    }
//
//    int operator[](int idx)const
//    {
//        assert(idx >= 0 and idx < size and "Index is out "
//            "of range!");
//        return arr[idx];
//    }
//    int& operator[](int idx)
//    {
//        assert(idx >= 0 and idx < size and "Index is out"
//            "of range!");
//        return arr[idx];
//    }
//    void enterCount();
//    void print()const;
//    void randomize();
//    void Sort();
//    void delElem();
//    int Sum();
//    ~DynArray()
//    {
//        std::cout << "Try to free memory from DynArray for"
//            << arr << " pointer\n";
//        delete[] arr;
//        std::cout << "DynArr destructed for " << size
//            << " elements, for " << this << '\n';
//    }
//};
//void DynArray::enterCount()
//{
//    cin >> this->size;
//}
//void DynArray::print()const
//{
//    for (int i{ 0 }; i < size; ++i)
//    {
//        std::cout << arr[i] << ' ';
//    }
//    std::cout << '\n';
//}
//void DynArray::randomize()
//{
//    for (int i{ 0 }; i < size; ++i)
//    {
//        arr[i] = rand() % 10;
//    }
//}
//void DynArray::Sort()
//{
//    for (int i = 0; i < size; i++)
//    {
//        int min = arr[0];
//        for (int j = i + 1; j < size; j++)
//        {
//
//            if (arr[j] < arr[i])
//            {
//                int buffer = arr[i];
//                arr[i] = arr[j];
//                arr[j] = buffer;
//            }
//        }
//    }
//}
//void DynArray::delElem()
//{
//    for (auto i = 0; i < size; i++)
//    {
//        for (auto j = 0; j < size; j++)
//        {
//            if (i != j)
//            {
//                if (arr[i] == arr[j])
//                {
//                    int buffer = arr[i];
//                    arr[i] = arr[j];
//                    arr[j] = buffer;
//                    size--;
//                }
//            }
//        }
//    }
//}
//int DynArray::Sum()
//{
//    int sum = 0;
//    for (int i = 0; i < size; i++)
//    {
//        sum += arr[i];
//    }
//    return sum;
//}
//DynArray arrayFactory(int arrSize)
//{
//    DynArray arr{ arrSize };
//    arr.randomize();
//    return arr;
//}
//int main()
//{
//    const int arrSize{ 10 };
//    DynArray ar1{ arrayFactory(arrSize) };
//    std::cout << "ar1 elements : ";
//    ar1.print();
//    std::cout << "\nChange every ar1 element to its "
//        "square:\n";
//    for (int i{ 0 }; i < arrSize; ++i)
//    {
//        ar1[i] *= ar1[i];
//        std::cout << "ar1[" << i << "] = " << ar1[i] << '\n';
//    }
//    const DynArray ar2{ arrayFactory(arrSize) };
//    std::cout << "ar2 elements :\n";
//    for (int i{ 0 }; i < arrSize; ++i)
//    {
//        std::cout << "ar2[" << i << "] = " << ar2[i] << '\n';
//    }
//
//    ar1.delElem();
//    ar1.print();
//    ar1.Sort();
//    ar1.print();
//    ar1.enterCount();
//    ar1.print();
//    cout<<ar1.Sum();
//    ar1.print();
//    return 0;
//}
//
//#include <iostream>
//#include <conio.h>
//using namespace std;
//void stopProgram(string message)
//{
//	cout << message << endl;
//	cout << "Press any key to exit program" << endl;
//	_getch();
//	exit(1);
//}
//template<class T>
//class Array
//{
//	static const size_t size{ 5 };
//	T arr[size];
//public:
//	Array()
//	{
//		for (int i = 0; i < size; i++)
//		{
//			arr[i] = T();
//		}
//	}
//	int getSize() const
//	{
//		return size;
//	}
//	T getItem(size_t index) const
//	{
//		if (index >= 0 && index < size)
//		{
//			return arr[index];
//		}
//		else
//		{
//			stopProgram("Index is out of range!");
//		}
//	}
//	void setItem(size_t index, T value)
//	{
//		if (index >= 0 && index < size)
//		{
//			arr[index] = value;
//		}
//		else
//		{
//			stopProgram("Index is out of range!");
//		}
//	}
//	void display()
//	{
//		for (int i = 0; i < size; i++)
//		{
//			cout << arr[i] << " ";
//		}
//		cout << endl;
//	}
//	/*void sort()
//	{
//		for (int k = size — 1; k > 0; k--)
//			for (int j = 0; j < k; j++)
//				if (arr[j] > arr[j + 1])
//					swap(arr[j], arr[j + 1]);
//		
//	}*/
//	void sort()
//	{
//		for (int k = size - 1; k > 0; k--)
//		{
//			for (int j = 0; j < k; j++)
//			{
//				if (arr[j] > arr[j + 1])
//				{
//					swap(arr[j], arr[j + 1]);
//				}
//			}
//		}
//	}
//};
//int main()
//{
//	cout << "Class Array" << endl << endl;
//	Array<int> intArray;
//	cout << "int Array initialization:" << endl;
//	intArray.display();
//	int size = intArray.getSize();
//	for (int i = size; i > 0; i--)
//	{
//		intArray.setItem(size - i, i);
//	}
//	cout << endl << "int Array after assignment:" << endl;
//	intArray.display();
//	intArray.sort();
//	cout << endl << "int Array after ordering:" << endl;
//	intArray.display();
//	cout << endl;
//	Array<string> strArray;
//	cout << "str Array initialization:" << endl;
//	strArray.display();
//	strArray.setItem(0, "two");
//	strArray.setItem(1, "seven");
//	strArray.setItem(2, "zero");
//	strArray.setItem(3, "four");
//	strArray.setItem(4, "one");
//	cout << endl << "str Array after assignment:" << endl;
//	strArray.display();
//	strArray.sort();
//	cout << endl << "str Array after ordering:" << endl;
//	strArray.display();
//	cout << endl << "Press any key to exit program" << endl;
//	_getch();
//	return 0;
//}
#include <iostream>
#include <vector>
#include <conio.h>
using namespace std;
template<class T>
struct Point
{
	T x;
	T y;
	void display()
	{
		cout << "(" << x << "," << y << ")";
	}
};
template<class T>
struct Array
{
	vector<T> data;
	void Add(T item)
	{
		data.push_back(item);
	}
	void display()
	{
		for (auto var : data)//
			cout << var << " ";
	}
};
template<template<class> class T, class T1>
struct Some
{
	T<T1> data; // создается переменная data,
	// типом которой будет шаблон класса T,
	// принимающий параметр-тип T1
	void Add(T1 item)
	{
		data.Add(item);
	}
	void display()
	{
		data.display();
		cout << endl;
	}
};
int main()
{
	// структура Point с целыми x,y
	Some<Point, int> intPoint;
	intPoint.data.x = 1;
	intPoint.data.y = 2;
	cout << "Some: struct Point with int x, y : ";
	intPoint.display();
	// структура Point с плавающими x,y
	Some<Point, double> doublePoint;
	doublePoint.data.x = 10.01;
	doublePoint.data.y = 0.02;
	cout << "Some: struct Point with double x,y : ";
	doublePoint.display();
	// массив (вектор) целых
	Some<Array, int> intArray;
	intArray.Add(1);
	intArray.Add(3);
	intArray.Add(5);
	cout << "Some: array (vector) with int items: ";
	intArray.display();
	_getch();
	return 0;
}