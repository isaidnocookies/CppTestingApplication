#pragma once

#include <string>
#include <iostream>

namespace Testing {
	class OutputTool
	{
	public:
		void log(std::string iMessage);
	private:
		std::string generateMessage(std::string iMessage);
	};
}