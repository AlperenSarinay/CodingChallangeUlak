#include "stdafx.h"
#include "LibrarySearch.h"

void LibrarySearch::search(string word)
{
	if (Result.find(word) == Result.end())
	{
		cout << "No instance exist\n";
		return;
	}
	for (auto i : Result[word])
	{
		cout << i.first;
		cout << " " << i.second << endl;
	}
}

void LibrarySearch::addFileInverted(string filename) {
	ifstream fp;
	fp.open(filename, ios::in);
	if (!fp) {
		cout << "File Not Found\n";
		return;
	}
	string word, line;
	int a;
	while (getline(fp, line)) {
		stringstream s(line);
		while (s >> word >> filename >> a) {
			Result[word][filename] = a;
		}
	}

}
