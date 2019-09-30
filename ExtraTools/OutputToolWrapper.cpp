#include "OutputToolWrapper.h"

OutputToolWrapper::OutputToolWrapper()
{
	helloCount = 0;
}

void OutputToolWrapper::sayHello()
{
	helloCount++;
	Testing::OutputTool logger;
	logger.log("Count: " + std::to_string(helloCount));
}

void OutputToolWrapper::saySomethingElse()
{
	std::cout << "Something else" << std::endl;
}