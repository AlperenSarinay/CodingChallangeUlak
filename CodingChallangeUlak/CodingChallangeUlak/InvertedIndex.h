#pragma once
#include<iostream>
#include<vector>
#include<map>
#include<string>

using namespace std;

class InvertedIndex
{
	map<string, map<string, int>> Dictionary;
public:
	void addfile(string filename);
	void creatAndWrite();
};

