#pragma once

#include <string>
#include <iostream>

class AnAbstractClass
{
public:
	virtual std::string getText() const = 0;
	virtual void setText(std::string) = 0;

	void outputText();

protected:
	std::string text;
};