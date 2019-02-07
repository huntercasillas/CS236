#ifndef SCANNER
#define SCANNER
#include "token.h"
#include <fstream>
#include <vector>

class scanner {
public:
	scanner(){}
	~scanner(){}
	void scan(string fileName);
	void scanToken();
	void scanID();
	void scanString();
	void scanComment();
    void scanComment2();
    void scanComment3();
	void makeToken(tokenType type, int lineNumber);
private:
	ifstream inputFile;
	ofstream outputFile;
	int line = 1;
	char current;
	char next;
	string value = "";
	int lineStart = 0;
	vector<token> myVector;
};

#endif
