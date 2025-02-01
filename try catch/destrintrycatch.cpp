// C++ Program to show the sequence of calling
// Constructors and destructors
#include <iostream>
using namespace std;

// Initialization of class
class Test {
public:
	// Constructor of class
	Test()
	{
		cout << "Constructing an object of class Test "
			<< endl;
	}

	// Destructor of class
	~Test()
	{
		cout << "Destructing the object of class Test "
			<< endl;
	}
};

int main()
{
	try {
		// Calling the constructor
		Test t1;
		throw 10;
	
	} // Destructor is being called here
	// Before the 'catch' statement
	catch (int i) {
		cout << "Caught " << i << endl;
	}
}
