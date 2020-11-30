#pragma once
#ifndef WORDFREQ_FILESYSTEMANALYZER_H
#define WORDFREQ_FILESYSTEMANALYZER_H

#include <string>
#include <list>
using namespace std;

class FileSystemAnalyzer {
	public:
		static list<string> DiscoverFiles(string rootPath);
};

#endif //WORDFREQ_FILESYSTEMANALYZER_H
