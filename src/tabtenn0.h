#ifndef SRC_TABTENN0_H_
#define SRC_TABTENN0_H_

class TableTennisPlayer {
private:
	enum {
		LIM = 20
	};
	char firstName[LIM];
	char lastName[LIM];
	bool hasTable;
public:
	TableTennisPlayer(const char *fn = "none", const char *ln = "none",
			bool ht = false);
	void printName() const;
	bool checkHasTable() const {
		return hasTable;
	}
	void resetTable(bool v) {
		hasTable = v;
	}

};

#endif
