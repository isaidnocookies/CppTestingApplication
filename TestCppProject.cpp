// TestCppProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "MyCoreClasses.h"
#include "Namespace1Class.h"
#include "Header.h"
#include "ClassWithNoName.h"
#include "ClassWithStaticFunction.h"
#include "ExtraTools/OutputToolWrapper.h"

#include "ABC_DEF/Namespace2Class.h"
#include "ABC_GHI/Namespace3Class.h"

int getAnotherAnswer();

int main()
{
    std::cout << "Hello!\n";
	AConcreteClass aC;

	aC.setText("AConcreteClassText");
	aC.outputText();

	ClassWithTemplates <int> cT;
	cT.setValue(10);
	cT.outputValue();
	
	nsOne::AClass ns1Class;
    ns1Class.sayHi();
    ns1Class.pickCppType(cPlusPlus::objects::aNamespace);

    // Class with no name
    classWithNoName.setText("Hello from the no-named class..");
    std::cout << classWithNoName.getText() << std::endl;

	StaticMethods::sayHello();
	int someAnswer = StaticMethods::getTheAnswer();
	std::cout << "Static says: " << someAnswer << std::endl;

	OutputToolWrapper myLogger;
	myLogger.sayHello();
	myLogger.sayHello();
	myLogger.saySomethingElse();

	BClass twoClass;
	twoClass.sayHi();

	nsThree::AClass threeClass;
	threeClass.sayHi();

	return 0;
}

int getAnotherAnswer() {
	return 13;
}