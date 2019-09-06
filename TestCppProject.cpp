// TestCppProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "MyCoreClasses.h"
#include "Namespace1Class.h"
#include "Header.h"
#include "ClassWithNoName.h"

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

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
