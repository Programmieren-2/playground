#include <iostream>
#include <string>

#include "person.h"

using std::string;
using std::ostream;
using prog2::Person;

Person::Person(string firstName, string middleName, string lastName, int age)
: firstName(firstName), middleName(middleName), lastName(lastName), age(age)
{
}

Person::Person(string firstName, string lastName, int age)
: Person(firstName, "", lastName, age)
{
}

Person::Person(string firstName, string middleName, string lastName)
: Person(firstName, middleName, lastName, 0)
{
}

Person::Person(string firstName, string lastName)
: Person(firstName, "", lastName)
{
}

string Person::getFirstName() const
{
	return firstName;
}

void Person::setFirstName(string firstName)
{
	this->firstName = firstName;
}

string Person::getMiddleName() const
{
	return middleName;
}

void Person::setMiddleName(string middleName)
{
	this->middleName = middleName;
}

string Person::getLastName() const
{
	return lastName;
}

void Person::setLastName(string lastName)
{
	this->lastName = lastName;
}

int Person::getAge()
{
	return age;
}

void Person::setAge(int age)
{
	this->age = age;
}

void Person::print(ostream& target) const
{
	target << firstName << " ";

	if (middleName != "")
		target << middleName << " ";

	target << lastName;

	if (age)
		target << " (" << age << ")";
}

bool Person::operator<(Person const& other)
{
	if (lastName == other.getLastName())
		return firstName < other.getFirstName();

	return lastName < other.getLastName();
}

bool Person::operator==(Person const& other)
{
	return (
		firstName == other.getFirstName()
		&& middleName == other.getMiddleName()
		&& lastName == other.getLastName()
	);
}

ostream& prog2::operator<<(ostream& target, Person const& person)
{
	person.print(target);
	return target;
}
