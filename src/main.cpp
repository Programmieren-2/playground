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
	Person aew("Armin", "Eckhard", "Maiwald", 81);
	Person ogw("Otto", "Gerhard", "Waalkes", 72);
	Person ae("Anke", "Engelke", 55);

	Musician ar("Arthur", "Rubinstein", "piano");
	Musician jf("Julie", "Fowlis", "vocals");
	Musician kg("Kinga", "Głyk", "bass");

	Tweeter tmp("Tweety", "McPeep", "@tmp");
	Tweeter djt("Donald", "John", "Trump", "@realdonaldtrump");
	Tweeter kp("Katy", "Perry", "@katyperry");

	vector persons = {aew, ogw, ae};
	vector musicians = {ar, jf, kg};
	vector tweeters = {tmp, djt, kp};

	thread sortPersons(getSorter(persons));
	thread sortMusicians(getSorter(musicians));
	thread sortTweeters(getSorter(tweeters));

	sortPersons.join();
	sortMusicians.join();
	sortTweeters.join();

	printall("Persons", persons);
	printall("Musicians", musicians);
	printall("Tweeters", tweeters);

	return 0;
}
