#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

class Person {
private:
	std::string firstName;
	std::string middleName;
	std::string lastName;

public:
	Person() = default;
	Person (std::string pFirstName, std::string pMiddleName, std::string pLastName);
	Person (std::string pFirstName, std::string pLastName);

	std::string getFirstName() const;
	void setFirstName(std::string pFirstName);
	std::string getLastName() const;
	void setLastName(std::string pLastName);
	std::string toString() const;

	friend std::ostream& operator<<(std::ostream& target, Person const & person);
};

#endif
