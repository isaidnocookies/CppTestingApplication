#pragma once

#include <iostream>

template <class T>
class ClassWithTemplates
{
private:
	T value;

public:
	T getValue() { return value; };

	void setValue(T iValue) {
		value = iValue;
	};

	void outputValue() {
		std::cout << value;
	};
};