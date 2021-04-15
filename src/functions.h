#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>
#include <vector>

template <class Streamable>
void printall(std::vector<Streamable>& items, std::string sep = "\n")
{
	for (Streamable item : items)
		std::cout << item << sep;
}

#endif
