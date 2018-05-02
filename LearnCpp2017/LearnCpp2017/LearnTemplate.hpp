#include "learnTemplate.h"
#include <iostream>
#include <typeinfo>
using namespace std;
#define OUT_PUT_FUNC(str) cout<<str << typeid(T).name() << __FUNCTION__ << endl;
template <class T> struct A::B
{
	void F()
	{
		OUT_PUT_FUNC("Generic")
	}
};

template <class T> struct A::B<T*>
{
	void F()
	{
		OUT_PUT_FUNC("partialSpecialization T*")
	}
};
template <> struct A::B<int*>
{
	void F()
	{
		OUT_PUT_FUNC("explicitSpecialization int*")
	}
};