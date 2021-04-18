#include <iostream>

#include "tweeter.h"

using std::ostream;
using std::string;
using std::to_string;
using prog2::Person;
using prog2::Tweeter;

int Tweeter::gid = 0;

Tweeter::Tweeter(string firstName, string middleName, string lastName, string twitterHandle)
: Person(firstName, middleName, lastName), id(gid), twitterHandle(twitterHandle)
{
	gid++;
}

Tweeter::Tweeter(string firstName, string lastName, string twitterHandle)
: Tweeter(firstName, "", lastName, twitterHandle)
{
}

void Tweeter::print(ostream& target) const
{
	target << "[" << to_string(id) << "] ";
	Person::print(target);
	target <<  " (" << twitterHandle << ")";
}
