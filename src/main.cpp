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
	Tweeter tweety("Tweety", "McPeep", "@tmp");
	Tweeter djt("Donald", "John", "Trump", "@realdonaldtrump");

	vector<Person> persons = {peter, otto};
	vector<Tweeter> tweeters = {tweety, djt};

	printall<Person>(persons);
	printall<Tweeter>(tweeters);

	return 0;
}
