#pragma once
#include "AnAbstractClass.h"

class AConcreteClass : public AnAbstractClass
{
public:
	std::string getText() const;
	void setText(std::string iInput);
};

