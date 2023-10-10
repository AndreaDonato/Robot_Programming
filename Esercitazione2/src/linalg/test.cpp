#include <iostream>

void test(int i = 0)
{
	std::cout << i << "\n";
}

int main(int argc, char const *argv[])
{
	int i = 5;
	test();
	return 0;
}

