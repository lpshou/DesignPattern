#include "singleton.h"
#include <iostream>
using namespace std;

int main(int args, char argv[])
{
	singleton *sng = singleton::Instance();

	singleton *sng1 = singleton::Instance();

	getchar();
	return 0;
}