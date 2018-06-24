#include <iostream>
#include <string>

class A
{
public:
	const char * getName(){return "A";}
	virtual int getValue() =0;
};

class B: public A
{
public:
	virtual const char* getName(){return "B";}
	virtual int getValue(){return 444;}
};

class C: public B
{
public:
	virtual const char* getName(){return "C";}
};

int main()
{
	C c;
	B &rb = c;
	std::cout << "Virtual function value: " << rb.getName() << '\n';
	A &ra = c;
	std::cout << "Function value: " << ra.getName() << '\n';

	B b;
	A &ca = b;
	std::cout << "get value is called? " << ca.getValue() << '\n';

	return 0;
}
