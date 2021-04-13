#include <iostream>

#include "person.h"
#include "tweeter.h"

using std::cout;
using std::endl;

int main() {
	Person peter("Peter", "Lustig");
	Person otto("Otto", "Waalkes");
	Tweeter tweety("Tweety", "McPeep", "@tmp");
	Tweeter djt("Donald", "John", "Trump", "@realdonaldtrump");

	cout << peter << endl << otto << endl << tweety << endl << djt << endl;
	return 0;
}
