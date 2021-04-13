#ifndef __tweeter__
#define __tweeter__

#include <iostream>

#include "tweeter.h"

using std::ostream;
using std::string;

Tweeter::Tweeter(string pFirstName, string pMiddleName, string pLastName, string pTwitterHandle)
: Person(pFirstName, pMiddleName, pLastName), twitterHandle(pTwitterHandle)
{
}

Tweeter::Tweeter(string pFirstName, string pLastName, string pTwitterHandle)
: Tweeter(pFirstName, "", pLastName, pTwitterHandle)
{
}

string Tweeter::toString() const
{
	return Person::toString() + " (" + twitterHandle + ")";
}

ostream& operator<< (ostream& target, Tweeter const & source)
{
    target << source.toString();
    return target;
}

#endif
