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
		std::cout << value << std::endl;
	};

	void outputValue(std::string iPrefix) {
		std::cout << iPrefix << " : " << value << std::endl;
	}

	void outputValue(std::string iPrefix, std::string iPrefixToThePrefix) {
		std::cout << iPrefixToThePrefix << " : " << iPrefix << " : " << value << std::endl;
	}
};