#pragma once
#ifndef WORDFREQ_FILESYSTEMANALYZER_H
#define WORDFREQ_FILESYSTEMANALYZER_H

#include <string>
#include <list>
using namespace std;

/*
* Class FileSystemAnalyzer
* @author Alperen Sarýnay
* @mail alperensarinay@gmail.com
* @create_at 29.12.2020
*/

class FileSystemAnalyzer {
	public:
		static list<string> DiscoverFiles(string rootPath);
};

#endif //WORDFREQ_FILESYSTEMANALYZER_H
