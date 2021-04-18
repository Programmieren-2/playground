#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>
#include <string>
#include <vector>

template <typename Streamable>
void printall(std::vector<Streamable>& items, std::string sep = "\n")
{
	for (Streamable item : items)
		std::cout << item << sep;
}

#endif
