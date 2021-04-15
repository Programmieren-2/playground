#ifndef __person__
#define __person__

#include <iostream>
#include <string>

#include "person.h"

using std::string;
using std::ostream;

Person::Person(string pFirstName, string pMiddleName, string pLastName)
: firstName(pFirstName), middleName(pMiddleName), lastName(pLastName)
{
}

Person::Person(string pFirstName, string pLastName)
: firstName(pFirstName), middleName(""), lastName(pLastName)
{
}

string Person::getFirstName() const
{
	return firstName;
}

void Person::setFirstName(string pFirstName)
{
	firstName = pFirstName;
}

string Person::getMiddleName() const
{
	return middleName;
}

void Person::setMiddleName(string pMiddleName)
{
	middleName = pMiddleName;
}

string Person::getLastName() const
{
	return lastName;
}

void Person::setLastName(string pLastName)
{
	lastName = pLastName;
}

void Person::print(ostream& target) const
{
	target << firstName << " ";

	if (middleName != "")
		target << middleName << " ";

	target << lastName;
}

bool Person::operator<(Person const& other)
{
	if (lastName == other.lastName)
		return firstName < other.getFirstName();

	return lastName < other.getLastName();
}

ostream& operator<<(ostream& target, Person const& person)
{
	person.print(target);
	return target;
}

#endif
