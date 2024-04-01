#include "ratedplayer.h"

RatedPlayer::RatedPlayer(unsigned int r, const char *fn, const char *ln,
		bool ht) :
		TableTennisPlayer(fn, ln, ht), rating(r) {

}

RatedPlayer::RatedPlayer(unsigned int r, const TableTennisPlayer &tp) :
		TableTennisPlayer(tp), rating(r) {

}

