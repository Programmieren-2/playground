#include <iostream>

#include "person.h"
#include "tweeter.h"

using std::cout;
using std::endl;

int main() {
	Person peter("Peter", "Lustig");
	Person otto("Otto", "Waalkes");
	Tweeter tweety("Tweety", "McPeep", "@tmp");

	cout << peter << endl << otto << endl << tweety << endl;
	return 0;
}
