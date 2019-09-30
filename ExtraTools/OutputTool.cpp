#include "OutputTool.h"

void Testing::OutputTool::log(std::string iMessage) {
	std::cout << generateMessage(iMessage) << std::endl;
}

std::string Testing::OutputTool::generateMessage(std::string iMessage) {
	return "[LOG] : " + iMessage;
}
