#include <thread>
#include <vector>

#include "functions.h"
#include "person.h"
#include "tweeter.h"

using std::thread;
using std::vector;
using prog2::getSorter;
using prog2::printall;

int main() {
	Person peter("Peter", "Lustig");
	Person otto("Otto", "Waalkes");
	Person julie("Julie", "Fowlis");
	Tweeter tweety("Tweety", "McPeep", "@tmp");
	Tweeter djt("Donald", "John", "Trump", "@realdonaldtrump");
	Tweeter katy("Katy", "Perry", "@katyperry");

	vector persons = {peter, otto, julie};
	vector tweeters = {tweety, djt, katy};

	thread sortPersons(getSorter(persons));
	thread sortTweeters(getSorter(tweeters));

	sortPersons.join();
	sortTweeters.join();

	printall(persons);
	printall(tweeters);

	return 0;
}
