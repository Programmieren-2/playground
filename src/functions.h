#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>
#include <string>
#include <vector>

namespace prog2 {
	template <typename Streamable>
	void printall(std::vector<Streamable> const & items, std::string const & sep = "\n")
	{
		for (Streamable item : items)
			std::cout << item << sep;
	}

	template <typename Streamable>
	void printall(std::string const & caption, std::vector<Streamable> const & items, std::string const & sep = "\n")
	{
		std::cout << "### " << caption << " ###" << sep;
		printall(items, sep);
	}

	template <typename Sortable>
	auto getSorter(std::vector<Sortable>& items)
	{
		return [&items](){sort(items.begin(), items.end());};
	}
}

#endif
