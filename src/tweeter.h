#ifndef TWEETER_H
#define TWEETER_H

#include <string>

#include "person.h"

class Tweeter
: public Person
{
private:
	static int gid;
	int id;
	std::string twitterHandle;

public:
	Tweeter(std::string pFirstName, std::string pMiddleName, std::string pLastName, std::string pTwitterHandle);
	Tweeter(std::string pFirstName, std::string pLastName, std::string pTwitterHandle);

	virtual void print(std::ostream& target = std::cout) const override;
};

#endif
