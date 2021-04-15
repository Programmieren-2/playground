#include <iostream>
#include <thread>
#include <vector>

#include "functions.h"
#include "person.h"
#include "tweeter.h"

using std::cout;
using std::endl;
using std::thread;
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

	auto sortPersonsCallback = [&persons](){sort(persons.begin(), persons.end());};
	auto sortTweetersCallback = [&tweeters](){sort(tweeters.begin(), tweeters.end());};

	thread sortPersons(sortPersonsCallback);
	thread sortTweeters(sortTweetersCallback);

	sortPersons.join();
	sortTweeters.join();

	printall<Person>(persons);
	printall<Tweeter>(tweeters);

	return 0;
}
