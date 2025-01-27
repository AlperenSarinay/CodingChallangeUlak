#include "stdafx.h"
#include "InvertedIndex.h"
#include<iostream>
#include<map>
#include<fstream>
#include<sstream>
#include <filesystem>
#include<string>

using namespace std;

// I map the words in all files and record how many times each word occurs in a .txt file named result.

void InvertedIndex::creatAndWrite() {
	ofstream myfile;
	myfile.open("result.txt");
	for (auto i : Dictionary)
	{
		for (auto j : Dictionary[i.first]) {
			myfile << i.first << " ";
			myfile << j.first << " ";
			myfile << j.second << endl;
		}
	}
	myfile.close();
}
void InvertedIndex::addfile(string filename)
{
	ifstream fp;
	fp.open(filename, ios::in);
	if (!fp)
	{
		cout << "File Not Found\n";
		return;
	}
	string line, word;
	int word_number = 0, j = 0;
	while (fp >> line) {
		auto search = Dictionary.find(line);
		if (search == Dictionary.end()) {
			Dictionary[line][filename] = 1;
		}
		else {
			if (Dictionary[line].find(filename) == Dictionary[line].end()) {
				Dictionary[line][filename] = 1;
			}
			else {
				Dictionary[line][filename] += 1;
			}
		}
	}
	fp.close();
}


