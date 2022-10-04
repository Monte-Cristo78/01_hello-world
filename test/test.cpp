#include "test.h"
#include "../index.h"
#include "termcolor.hpp"

#include <iostream>
#include <string>

using namespace std;

void test() {
	struct Option {
			string toBe;
	};

	Option options[] = {
			{
					"Hello, World"
			}
	};

	int optionsLength = sizeof(options) / sizeof(options[0]);

	for (int i = 0; i < optionsLength; i++) {
		string result = helloWorld();

		cout << endl;

		if (result == options[i].toBe) {
			cout << termcolor::green << "TEST " << "\"" << options[i].toBe << "\"" << " PASSED!";
		} else {
			cout << termcolor::red << "TEST " << "\"" << options[i].toBe << "\"" << " FAILED! EXPECTED \"" << options[i].toBe << "\" INSTEAD OF " << "\"" << result << "\"!";
		}

		cout << endl;
	}
}