#ifndef __person__
#define __person__

#include <iostream>
#include <string>

#include "person.h"

using std::string;
using std::ostream;

Person::Person (string pFirstName, string pLastName)
: firstName(pFirstName), lastName(pLastName)
{
}

string Person::getFirstName ()
{
	return firstName;
}

void Person::setFirstName (string pFirstName)
{
	firstName = pFirstName;
}

string Person::getLastName ()
{
	return lastName;
}

void Person::setLastName (string pLastName)
{
	lastName = pLastName;
}

string Person::toString ()
{
	return firstName + " " + lastName;
}

ostream& operator<< (ostream& target, Person& source)
{
    target << source.toString();
    return target;
}

#endif
