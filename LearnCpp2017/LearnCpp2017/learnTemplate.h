#pragma once

class A
{
	template <class T> struct B;
	template <class T> struct B<T*>;
	template<> struct B<int*>;
};

#include "LearnTemplate.hpp"