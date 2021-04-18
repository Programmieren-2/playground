#include <iostream>

#include "musician.h"

using std::ostream;
using std::string;
using prog2::Person;
using prog2::Musician;

Musician::Musician(string firstName, string middleName, string lastName, string instrument)
: Person(firstName, middleName, lastName), instrument(instrument)
{
}

Musician::Musician(string firstName, string lastName, string instrument)
: Musician(firstName, "", lastName, instrument)
{
}

string Musician::getInstrument()
{
	return instrument;
}

void Musician::print(ostream& target) const
{
	Person::print(target);
	target <<  " (" << instrument << ")";
}
