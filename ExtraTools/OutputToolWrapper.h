#pragma once

#include <iostream>
#include "OutputTool.h"

class OutputToolWrapper
{
public:
	OutputToolWrapper();

	void sayHello();
	void saySomethingElse();

private:
	int helloCount;
};

