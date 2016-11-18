#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

int main(){
	ifstream numbersFile ("/Users/jcardasi/Documents/Resources/Interview Prep/CTCI-6/Basic File Challange/numbers.txt");
	ofstream outputFile ("/Users/jcardasi/Documents/Resources/Interview Prep/CTCI-6/Basic File Challange/numbers_edited.txt");

	string currentLine;
	if(numbersFile.is_open() && outputFile.is_open()){
		for(int lineNumber=0; getline(numbersFile, currentLine); lineNumber++){
			int num = atoi(currentLine.c_str());
			int newNumber = num * lineNumber;
			outputFile << to_string(newNumber).c_str() << endl;
		}
	}
	else{
		cout << "Unable to open files" << endl;
	}

	numbersFile.close();
	return 0;
}