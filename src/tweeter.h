#ifndef TWEETER_H
#define TWEETER_H

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

		virtual void print(std::ostream& target = std::cout) const override;
	};
}

#endif
