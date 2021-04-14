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
	Person(std::string pFirstName, std::string pMiddleName, std::string pLastName);
	Person(std::string pFirstName, std::string pLastName);
	virtual ~Person() = default;

	std::string getFirstName() const;
	void setFirstName(std::string pFirstName);
	std::string getMiddleName() const;
	void setMiddleName(std::string pMiddleName);
	std::string getLastName() const;
	void setLastName(std::string pLastName);

	virtual void print(std::ostream& target = std::cout) const;

	friend std::ostream& operator<<(std::ostream& target, Person const& person);
};

#endif
