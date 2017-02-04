//============================================================================
// Name        : Branchness.cpp
// Author      : Jacek Weremko
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>




bool func_a(char a)
{
	return a == 'a' ? true : false;
}

bool func_b(char b)
{
	return b == 'b' ? true : false;
}

bool func_c(char c)
{
	return c == 'b' ? true : false;
}

bool func_d(char d)
{
	return d == 'd' ? true : false;
}


int main(int argc, char** argv)
{
	std::vector<std::string> args;
	std::copy(argv + 1, argv + argc, std::back_inserter(args));

	if (func_a(args[0].at(0)))
	{
		if (func_b(args[0].at(1)))
		{
			if (func_c(args[1].at(0)))
			{
				if (func_d(args[1].at(1)))
				{
					volatile int crash = 5 / 0;
				}
			}
		}
	}

	return 0;
}
