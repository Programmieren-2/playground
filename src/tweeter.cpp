#include <iostream>

#include "tweeter.h"

using std::ostream;
using std::string;
using std::to_string;

int Tweeter::gid = 0;

Tweeter::Tweeter(string pFirstName, string pMiddleName, string pLastName, string pTwitterHandle)
: Person(pFirstName, pMiddleName, pLastName), id(gid), twitterHandle(pTwitterHandle)
{
	gid++;
}

Tweeter::Tweeter(string pFirstName, string pLastName, string pTwitterHandle)
: Tweeter(pFirstName, "", pLastName, pTwitterHandle)
{
}

void Tweeter::print(ostream& target) const
{
	target << "[" << to_string(id) << "] ";
	Person::print(target);
	target <<  " (" << twitterHandle << ")";
}
