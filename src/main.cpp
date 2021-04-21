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
	Person *aew = new Person("Armin", "Eckhard", "Maiwald", 81);
	Person *ogw = new Person("Otto", "Gerhard", "Waalkes", 72);
	Person *ae = new Person("Anke", "Engelke", 55);
	Musician *ar = new Musician("Arthur", "Rubinstein", "piano");
	Musician *jf = new Musician("Julie", "Fowlis", "vocals");
	Musician *kg = new Musician("Kinga", "Głyk", "bass");
	Tweeter *tmp = new Tweeter("Tweety", "McPeep", "@tmp");
	Tweeter *djt = new Tweeter("Donald", "John", "Trump", "@realdonaldtrump");
	Tweeter *kp = new Tweeter("Katy", "Perry", "@katyperry");

	vector persons = {*aew, *ogw, *ae};
	vector musicians = {*ar, *jf, *kg};
	vector tweeters = {*tmp, *djt, *kp};

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
