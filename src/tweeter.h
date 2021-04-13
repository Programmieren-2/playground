#ifndef TWEETER_H
#define TWEETER_H

#include <string>

#include "person.h"

class Tweeter
: public Person
{
private:
	std::string twitterHandle;

public:
	Tweeter(std::string pFirstName, std::string pLastName, std::string pTwitterHandle);
	std::string toString();
	friend std::ostream& operator<< (std::ostream& target, Tweeter& source);
};

#endif
