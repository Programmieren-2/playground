#ifndef TWEETER_H
#define TWEETER_H

#include <iostream>
#include <string>

#include "person.h"

namespace prog2 {
	class Tweeter
	: public Person
	{
	private:
		static int gid;
		int id;
		std::string twitterHandle;

	public:
		Tweeter(std::string firstName, std::string middleName, std::string lastName, std::string twitterHandle);
		Tweeter(std::string firstName, std::string lastName, std::string twitterHandle);

		bool operator<(Tweeter const& other);
		bool operator==(Tweeter const& other);
		virtual void print(std::ostream& target = std::cout) const override;
	};
}

#endif
