#include <iostream>
#include "HashUlancano.h"
using namespace  std;


int main() {

	HashUlancano h(5);
	h.add(2, "Nesta 1");
	h.add(4, "Nesta 2");
	h.add(21, "Nesta 3");
	h.add(42, "Nesta 4");
	h.add(21, "Nesta 5");
	h.print();
	/*h.deleteByKey(21);
	h.print();*/

	return 0;
}
