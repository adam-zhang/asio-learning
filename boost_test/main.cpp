#include <boost/shared_ptr.hpp>
#include <iostream>

int main(int argc, char** argv)
{
	boost::shared_ptr<int> p(new int(10));
	std::cout << *p << std::endl;
	return 0;
}
