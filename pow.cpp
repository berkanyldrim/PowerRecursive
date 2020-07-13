PowerRecursive.h

#ifndef POWERRECURSIVE_H
#define POWERRECURSIVE_H

class PowerRecursive
{

public:

int pow(int, int);

};

#endif


PowerRecursive.cpp


#include "PowerRecursive.h"

using namespace std;

int PowerRecursive::pow(int a, int n)
{

	if (n==1) return a;
	else 
	{
		return a*pow(a, n-1);
	}
}





#include <iostream>
#include "PowerRecursive.h"

using namespace std;

int main() 
{

	int a,n;
PowerRecursive p;

	cin >> a >> n;

	cout << p.pow(a,n) << endl;

	return 0;
}
