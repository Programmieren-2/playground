#ifndef __tweeter__
#define __tweeter__

#include <iostream>

#include "tweeter.h"

using std::ostream;
using std::string;

Tweeter::Tweeter(string pFirstName, string pLastName, string pTwitterHandle)
: Person(pFirstName, pLastName), twitterHandle(pTwitterHandle)
{
}

string Tweeter::toString()
{
	return Person::toString() + " (" + twitterHandle + ")";
}

ostream& operator<< (ostream& target, Tweeter& source)
{
    target << source.toString();
    return target;
}

#endif
