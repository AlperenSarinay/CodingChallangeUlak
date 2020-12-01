#include<iostream>
#include<map>
#include<fstream>
#include<sstream>
#include <filesystem>
using namespace std;

/*
* Class LibrarySearch
* @author Alperen Sarýnay
* @mail alperensarinay@gmail.com
* @create_at 30.12.2020
*/

class LibrarySearch
{
	
public:
	map<string, map<string, int>> Result;
	void search(string word);
	void addFileInverted(string filename);
	
};

