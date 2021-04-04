#include "helpers.h"
#include <time.h>
#include <iostream>

int randumber() {
	srand(time(0));
	return rand() % 10;
}

bool tsiviratel(int source[], int tsifra) {
	int lenght = sizeof(source) / sizeof(*source);
	
	for(int i = 0; i <= lenght; i++) {
		if (tsifra == source[i]) {
			return true;
		}
	}
	return false;
	}

