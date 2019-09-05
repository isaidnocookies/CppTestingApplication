#include "AConcreteClass.h"

std::string AConcreteClass::getText() const
{
	return text;
}

void AConcreteClass::setText(std::string iInput)
{
	text = iInput;
}
