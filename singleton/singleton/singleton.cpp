#include "singleton.h"
#include <iostream>
using namespace std;

singleton *singleton::_instance = NULL;

singleton::singleton()
{
	cout<<"singleton..."<<endl;
}

singleton *singleton::Instance()
{
	if(_instance == NULL)
	{
		_instance = new singleton();
	}
	return _instance;
}