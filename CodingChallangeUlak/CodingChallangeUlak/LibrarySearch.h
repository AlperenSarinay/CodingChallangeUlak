#include<iostream>
#include<map>
#include<fstream>
#include<sstream>
#include <filesystem>
using namespace std;

/*
* Class LibrarySearch
* @author Alperen Sar�nay
* @mail alperensarinay@gmail.com
* @create_at 30.12.2020
*/

class LibrarySearch
{
	map<string, map<string, int>> Result;
public:
	void search(string word);
	void addFileInverted(string filename);
	
};
