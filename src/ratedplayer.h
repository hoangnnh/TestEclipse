#ifndef SRC_RATEDPLAYER_H_
#define SRC_RATEDPLAYER_H_

#include "tabtenn0.h"

class RatedPlayer: public TableTennisPlayer {
private:
	unsigned int rating;
public:
	RatedPlayer(unsigned int r, const char *fn = "none",
			const char *ln = "none", bool ht = false);
	RatedPlayer(unsigned int r, const TableTennisPlayer &tp);
	unsigned int getRating() {
		return rating;
	}
	void setRating(unsigned int r) {
		rating = r;
	}
};

#endif
