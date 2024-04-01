#include "tabtenn0.h"

#include <iostream>
#include <cstring>

TableTennisPlayer::TableTennisPlayer(const char *fn, const char *ln, bool ht) {
	std::strncpy(firstName, fn, LIM - 1);
	firstName[LIM - 1] = '\0';
	std::strncpy(lastName, ln, LIM - 1);
	lastName[LIM - 1] = '\0';
	hasTable = ht;
}
