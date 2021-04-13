#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

class Person {
private:
	std::string firstName;
	std::string lastName;

public:
	Person() = default;
	Person (std::string pFirstName, std::string pLastName);

	std::string getFirstName();
	void setFirstName(std::string pFirstName);
	std::string getLastName();
	void setLastName(std::string pLastName);
	std::string toString();

	friend std::ostream& operator<<(std::ostream& target, Person& person);
};

#endif
