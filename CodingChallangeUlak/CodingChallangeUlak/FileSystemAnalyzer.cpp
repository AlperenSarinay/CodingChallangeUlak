#include "stdafx.h"
#include "FileSystemAnalyzer.h"
#include "iostream"
#include <filesystem>

const std::string &TEXT_FILE_EXTENSION = ".txt";
namespace fs = std::experimental::filesystem;

inline bool ends_with(std::string const & value, std::string const & ending)
{
	if (ending.size() > value.size()) return false;
	return std::equal(ending.rbegin(), ending.rend(), value.rbegin());
}

list<string> FileSystemAnalyzer::DiscoverFiles(string rootPath) {

	std::cout << "Discovering txt Files in path: " << rootPath << endl;
	list<string> files;
	for (auto& p : fs::recursive_directory_iterator(rootPath)) {
		string file = p.path().string();
		if (ends_with(file, TEXT_FILE_EXTENSION))
			files.push_front(file);
	}
	return files;
}
