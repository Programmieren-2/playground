#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

namespace prog2 {
	class Person {
	private:
		std::string firstName;
		std::string middleName;
		std::string lastName;
		int age;

	public:
		Person() = default;
		Person(std::string firstName, std::string middleName, std::string lastName, int age);
		Person(std::string firstName, std::string lastName, int age);
		Person(std::string firstName, std::string middleName, std::string lastName);
		Person(std::string firstName, std::string lastName);
		virtual ~Person() = default;

		std::string getFirstName() const;
		void setFirstName(std::string firstName);
		std::string getMiddleName() const;
		void setMiddleName(std::string middleName);
		std::string getLastName() const;
		void setLastName(std::string lastName);
		int getAge();
		void setAge(int age);

		virtual void print(std::ostream& target = std::cout) const;
		bool operator<(Person const& other);
		bool operator==(Person const& other);

		friend std::ostream& operator<<(std::ostream& target, Person const& person);
	};

	std::ostream& operator<<(std::ostream& target, Person const& person);
}

#endif
