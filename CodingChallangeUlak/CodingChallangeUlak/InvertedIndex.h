#include<iostream>
#include<map>
#include<string>

using namespace std;

/*
* Class InvertedIndex
* @author Alperen Sarýnay
* @mail alperensarinay@gmail.com
* @create_at 30.12.2020
*/


class InvertedIndex
{
	map<string, map<string, int>> Dictionary;
public:
	void addfile(string filename);
	void creatAndWrite();
};

