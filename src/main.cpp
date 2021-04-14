#include <iostream>
#include <vector>

#include "functions.h"
#include "person.h"
#include "tweeter.h"

using std::cout;
using std::endl;
using std::vector;

int main() {
	Person peter("Peter", "Lustig");
	Person otto("Otto", "Waalkes");
	Person julie("Julie", "Fowlis");
	Tweeter tweety("Tweety", "McPeep", "@tmp");
	Tweeter djt("Donald", "John", "Trump", "@realdonaldtrump");
	Tweeter katy("Katy", "Perry", "@katyperry");

	vector<Person> persons = {peter, otto, julie};
	vector<Tweeter> tweeters = {tweety, djt, katy};

	printall<Person>(persons);
	printall<Tweeter>(tweeters);

	return 0;
}
