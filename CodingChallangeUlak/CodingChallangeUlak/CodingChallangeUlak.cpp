#include "stdafx.h"
#include "FileSystemAnalyzer.h"
#include "InvertedIndex.h"
#include "LibrarySearch.h"
#include<iostream>
#include<string>
#include<typeinfo>
#include<time.h>

using namespace std;

int main(int argc, const char *argv[])
{
	FileSystemAnalyzer files;
	InvertedIndex Data;
	LibrarySearch Search;
	string path,word;
	list<string> listPath;
	string action = argv[1];
	string index1 = argv[2];
	string index2 = argv[3];
	const clock_t begin_time = clock();
	if (action == "cli") {
		if (index1 == "-index") {
			listPath = files.DiscoverFiles(index2);
			for (string filePath : listPath) {
				Data.addfile(filePath);
			}
			Data.creatAndWrite();
		}
		else if (index1 == "-search") {
			Search.addFileInverted("result.txt");
			Search.search(index2);
		}
	}
	else {
		cout << "Enter a valid command";
	}
	cout << "Time : "<<float(clock() - begin_time) / CLOCKS_PER_SEC;
	return 0;
}

