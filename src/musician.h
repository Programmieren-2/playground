#ifndef MUSICIAN_H
#define MUSICION_H

#include <iostream>
#include <string>

#include "person.h"

namespace prog2 {
	class Musician
	: public Person
	{
	private:
		std::string instrument;

	public:
		Musician(std::string firstName, std::string middleName, std::string lastName, std::string instrument);
		Musician(std::string firstName, std::string lastName, std::string instrument);

		std::string getInstrument();
		virtual void print(std::ostream& target = std::cout) const override;
	};
}

#endif
