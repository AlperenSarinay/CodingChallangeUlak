// CodingChallangeUlak.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include "FileSystemAnalyzer.h"
#include<iostream>
#include<string>

using namespace std;

int main()
{
	FileSystemAnalyzer files;
	string path;
	cout << "Enter the path :";
	cin >> path;
	files.DiscoverFiles(path);
}

