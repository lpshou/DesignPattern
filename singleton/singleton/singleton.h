#pragma once

#include<iostream>
using namespace std;

class singleton
{
public:
	static singleton *Instance();
protected:
	singleton();
private:
	static singleton *_instance;
};

