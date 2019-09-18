#pragma once

#include "ClassWithStaticFunction.h"

void StaticMethods::sayHello() {
	std::cout << "Hello" << std::endl;
}

int StaticMethods::getTheAnswer() {
	return 42;
}