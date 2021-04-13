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
	Tweeter(std::string pFirstName, std::string pMiddleName, std::string pLastName, std::string pTwitterHandle);
	Tweeter(std::string pFirstName, std::string pLastName, std::string pTwitterHandle);
	std::string toString() const;
	friend std::ostream& operator<< (std::ostream& target, Tweeter const & source);
};

#endif
