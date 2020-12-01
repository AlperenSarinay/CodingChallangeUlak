#include "pch.h"
#include "gtest/gtest.h"
#include <fstream>
#include "../CodingChallangeUlak/FileSystemAnalyzer.cpp"
#include "../CodingChallangeUlak/InvertedIndex.cpp"
#include "../CodingChallangeUlak/LibrarySearch.cpp"

TEST(FileSystemAnalyzerTest, test) {

	ofstream myfile;
	list<string> listPath;
	FileSystemAnalyzer files;
	string path = "./";

	myfile.open("test1.txt");
	myfile.close();
	myfile.open("test2.txt");
	myfile.close();
	myfile.open("test3.txt");
	myfile.close();
	listPath = files.DiscoverFiles(path);

	 EXPECT_EQ(3, listPath.size());
	 EXPECT_TRUE(true); 
}

TEST(InvertedIndexTest1, test1) {

	ofstream myfile;
	InvertedIndex Data;
	myfile.open("test1.txt");
	myfile << "blue red color green";
	myfile.close();
	Data.addfile("test1.txt");

	EXPECT_EQ(4, Data.Dictionary.size());
	EXPECT_TRUE(true);
}

TEST(InvertedIndexTest2, test2) {

	InvertedIndex Data;
	Data.addfile("test1.txt");

	EXPECT_EQ(Data.Dictionary.begin(), Data.Dictionary.find("blue"));
	EXPECT_TRUE(true);
}

TEST(LibrarySearchTest3, test3) {

	ofstream myfile;
	LibrarySearch Data;
	myfile.open("test2.txt");
	myfile << "blue test2.txt 3";
	myfile << "red test2.txt 2";
	myfile.close();

	Data.addFileInverted("test2.txt");
	EXPECT_EQ(2,Data.Result.size());
	EXPECT_TRUE(true);
}

TEST(LibrarySearchTest4, test4) {

	LibrarySearch Data;
	Data.addFileInverted("test2.txt");

	EXPECT_EQ(Data.Result.begin(), Data.Result.find("blue"));
	EXPECT_TRUE(true);
}