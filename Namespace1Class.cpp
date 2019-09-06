#include "Namespace1Class.h"

void nsOne::AClass::sayHi()
{
	std::cout << "Hello from nsOne AClass" << std::endl;
}

void nsOne::AClass::pickCppType(int iInput)
{
	switch (iInput) {
	case cPlusPlus::objects::aClass:
		cout << "A Class" << endl;
		break;
	case cPlusPlus::objects::anAbstractClass:
		cout << "An Abstract Class" << endl;
		break;
	default:
		cout << "Something else" << endl;
		break;
	}
}
