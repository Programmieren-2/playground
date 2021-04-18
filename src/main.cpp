#include <thread>
#include <vector>

#include "functions.h"
#include "person.h"
#include "musician.h"
#include "tweeter.h"

using std::thread;
using std::vector;
using prog2::getSorter;
using prog2::printall;
using prog2::Person;
using prog2::Musician;
using prog2::Tweeter;

int main() {
	Person pl("Peter", "Lustig");
	Person ow("Otto", "Waalkes");
	Person ae("Anke", "Engelke");
	Musician jf("Julie", "Fowlis", "vocals");
	Musician kg("Kinga", "Głyk", "bass");
	Musician ar("Arthur", "Rubinstein", "piano");
	Tweeter tmp("Tweety", "McPeep", "@tmp");
	Tweeter djt("Donald", "John", "Trump", "@realdonaldtrump");
	Tweeter kp("Katy", "Perry", "@katyperry");

	vector persons = {pl, ow, ae};
	vector musicians = {jf, kg, ar};
	vector tweeters = {tmp, djt, kp};

	thread sortPersons(getSorter(persons));
	thread sortMusicians(getSorter(musicians));
	thread sortTweeters(getSorter(tweeters));

	sortPersons.join();
	sortMusicians.join();
	sortTweeters.join();

	printall(persons);
	printall(musicians);
	printall(tweeters);

	return 0;
}
